/* Module: vegas30.exe
   Function: FUN_004987a0
   Address: 004987a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004987a0(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                 ,int param_7,undefined4 param_8,undefined4 param_9,uint param_10,int param_11,
                 int param_12,undefined4 *param_13)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_14;
  int local_8;
  int local_4;
  
  iVar4 = DAT_0064a8e4;
  uVar3 = DAT_0064a8e0;
  if ((int)param_13 < 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_13 = param_1;
    }
    else {
      param_13 = (undefined4 *)*param_1;
    }
  }
  local_14 = 0;
  if (0 < (int)param_13) {
    do {
      iVar1 = *(int *)(param_1[2] + local_14 * 4);
      if (((*(uint *)(iVar1 + 0x10) & 8) == 0) && ((*(uint *)(iVar1 + 0x10) & 0x100000) == 0)) {
        iVar5 = *(int *)(iVar1 + 0x218);
        iVar9 = (param_5 - iVar4) - (uint)(param_4 < uVar3);
        iVar2 = *(int *)(iVar5 + 0x84);
        uVar6 = *(uint *)(iVar5 + 0x80);
        if ((iVar2 < iVar9) || ((iVar2 <= iVar9 && (uVar6 < param_4 - uVar3)))) {
LAB_00498876:
          if ((*(uint *)(iVar1 + 0x18) != uVar6) || (*(int *)(iVar1 + 0x1c) != iVar2)) {
            uVar13 = *(undefined4 *)(iVar5 + 0x8c);
            uVar12 = *(undefined4 *)(iVar5 + 0x88);
            uVar11 = *(undefined4 *)(iVar5 + 0x94);
            uVar10 = *(undefined4 *)(iVar5 + 0x90);
            iVar5 = 0;
            iVar9 = 0;
            goto LAB_004988a6;
          }
        }
        else {
          iVar9 = iVar4 + param_7 + (uint)CARRY4(uVar3,param_6);
          if ((iVar9 < iVar2) || ((iVar9 <= iVar2 && (uVar3 + param_6 < uVar6)))) goto LAB_00498876;
          uVar13 = *(undefined4 *)(iVar5 + 0x8c);
          uVar12 = *(undefined4 *)(iVar5 + 0x88);
          uVar11 = *(undefined4 *)(iVar5 + 0x94);
          uVar10 = *(undefined4 *)(iVar5 + 0x90);
          iVar9 = param_2 - uVar6;
          iVar5 = (param_3 - iVar2) - (uint)(param_2 < uVar6);
LAB_004988a6:
          FUN_00498540(iVar1,1,iVar9,iVar5,uVar6,iVar2,uVar10,uVar11,uVar12,uVar13);
        }
        if (param_12 != 0) {
          iVar5 = *(int *)(iVar1 + 0x218);
          uVar6 = *(uint *)(iVar5 + 0x88) - *(uint *)(iVar5 + 0x80);
          uVar7 = uVar6 + *(uint *)(iVar1 + 0x18);
          uVar8 = uVar7 - param_2;
          local_8 = uVar8 + param_10;
          local_4 = (((((*(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x84)) -
                       (uint)(*(uint *)(iVar5 + 0x88) < *(uint *)(iVar5 + 0x80))) +
                       *(int *)(iVar1 + 0x1c) + (uint)CARRY4(uVar6,*(uint *)(iVar1 + 0x18))) -
                     param_3) - (uint)(uVar7 < param_2)) + param_11 + (uint)CARRY4(uVar8,param_10);
          FUN_005c7320(iVar1,0,&local_8,0);
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < (int)param_13);
  }
  return;
}


