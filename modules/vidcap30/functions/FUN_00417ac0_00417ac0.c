/* Module: vidcap30.exe
   Function: FUN_00417ac0
   Address: 00417ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417ac0(HWND param_1,uchar *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HMENU pHVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  UINT uPosition;
  undefined4 *puVar10;
  bool bVar11;
  uchar local_214 [260];
  CHAR local_110 [272];
  
  if (DAT_005ba990 != 0) {
    iVar3 = FUN_00417ab0(param_1);
    _mbscpy(local_214,param_2);
    uVar8 = 0;
    bVar11 = *param_3 == 0;
    if (!bVar11) {
      iVar7 = 0;
      do {
        iVar4 = lstrcmpA((LPCSTR)(param_3[1] + 4 + iVar7),(LPCSTR)local_214);
        if (iVar4 == 0) {
          return 0;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x108;
      } while (uVar8 < *param_3);
      bVar11 = *param_3 == 0;
    }
    if (bVar11) {
      iVar7 = iVar3;
      pHVar5 = GetMenu(param_1);
      pHVar5 = GetSubMenu(pHVar5,iVar7);
      AppendMenuA(pHVar5,0x800,0,(LPCSTR)0x0);
    }
    if (*param_3 < DAT_005ba998) {
      iVar7 = iVar3;
      pHVar5 = GetMenu(param_1);
      pHVar5 = GetSubMenu(pHVar5,iVar7);
      AppendMenuA(pHVar5,0,*param_3 + 0x41c,"");
      *param_3 = *param_3 + 1;
    }
    uVar8 = *param_3;
    if (1 < uVar8) {
      iVar7 = uVar8 - 1;
      iVar4 = uVar8 * 0x108;
      do {
        iVar1 = iVar4 + -0x210;
        iVar2 = iVar4 + -0x108;
        iVar4 = iVar4 + -0x108;
        iVar7 = iVar7 + -1;
        puVar9 = (undefined4 *)(iVar1 + param_3[1]);
        puVar10 = (undefined4 *)(iVar2 + param_3[1]);
        for (iVar6 = 0x42; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (iVar7 != 0);
    }
    _mbscpy((uchar *)(param_3[1] + 4),local_214);
    *(undefined4 *)param_3[1] = 400;
    if (*param_3 != 0) {
      iVar7 = 0;
      uPosition = 0x41c;
      do {
        FUN_00417a10(uPosition - 0x41b,iVar7 + 4 + param_3[1],local_110,0x10e);
        iVar4 = iVar3;
        pHVar5 = GetMenu(param_1);
        pHVar5 = GetSubMenu(pHVar5,iVar4);
        ModifyMenuA(pHVar5,uPosition,0,uPosition,local_110);
        iVar7 = iVar7 + 0x108;
        uVar8 = uPosition - 0x41b;
        uPosition = uPosition + 1;
      } while (uVar8 < *param_3);
    }
  }
  return 0;
}


