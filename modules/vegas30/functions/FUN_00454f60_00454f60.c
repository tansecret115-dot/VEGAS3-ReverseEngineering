/* Module: vegas30.exe
   Function: FUN_00454f60
   Address: 00454f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454f60(int param_1,int param_2,LONG param_3,int *param_4,int *param_5,uint param_6)

{
  RECT *lprc;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  POINT pt;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  
  iVar8 = param_4[3];
  iVar1 = param_5[3];
  iVar2 = param_4[1];
  iVar3 = *param_4;
  iVar4 = param_5[1];
  iVar5 = *param_5;
  lprc = (RECT *)(param_1 + 0x15c);
  *(int *)(param_1 + 0x164) = param_4[2] + param_5[2];
  lprc->left = iVar3 - iVar5;
  *(int *)(param_1 + 0x160) = iVar2 - iVar4;
  *(int *)(param_1 + 0x168) = iVar8 + iVar1;
  pt.y = param_3;
  pt.x = param_2;
  BVar6 = PtInRect(lprc,pt);
  if (BVar6 != 0) {
    FUN_00454f40(param_1);
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x148) & 0xffffff20 ^ param_6 & 1;
  uVar10 = (param_6 & 0x60) << 1;
  *(uint *)(param_1 + 0x148) = uVar7 | uVar10 | param_6 & 0x1e;
  uVar9 = DAT_0064772c;
  if ((((uVar10 & 0x80) == 0) && ((uVar7 & 1) != 0)) && ((param_6 & 2) == 0)) {
    if ((param_2 < lprc->left) &&
       ((*(int *)(param_1 + 0xb8c) < 0 ||
        ((*(int *)(param_1 + 0xb8c) < 1 && (*(int *)(param_1 + 0xb88) == 0)))))) {
LAB_00455043:
      FUN_00454f40(param_1);
      return;
    }
    if (((uVar10 & 0x40) == 0) && (*(int *)(param_1 + 0x164) < param_2)) {
      iVar8 = *(int *)(param_1 + 0xb94) + *(int *)(param_1 + 0xb8c) +
              (uint)CARRY4(*(uint *)(param_1 + 0xb90),*(uint *)(param_1 + 0xb88));
      if ((*(int *)(param_1 + 0x604) <= iVar8) &&
         ((*(int *)(param_1 + 0x604) < iVar8 ||
          (*(uint *)(param_1 + 0x600) <= *(uint *)(param_1 + 0xb90) + *(uint *)(param_1 + 0xb88)))))
      goto LAB_00455043;
    }
  }
  *(undefined4 *)(param_1 + 0x158) = 0xf0;
  *(undefined4 *)(param_1 + 0x154) = uVar9;
  if (DAT_00647684 != &DAT_00454a00) {
    uVar9 = _SfGetMillisec_0();
    *(undefined4 *)(param_1 + 0x14c) = uVar9;
    FUN_00404660(&DAT_00454a00,param_1);
  }
  return;
}


