/* Module: mcplugrw.dll
   Function: FUN_00486670
   Address: 00486670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00486670(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *local_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x189);
  uVar2 = *(undefined4 *)(param_1 + 0x165);
  iVar9 = *(int *)(param_1 + 0x15d);
  *(undefined4 *)(iVar1 + 0xd) = **(undefined4 **)(param_1 + 0x51);
  *(undefined4 *)(iVar1 + 0x11) = *(undefined4 *)(*(int *)(param_1 + 0x51) + 4);
  if ((*(int *)(param_1 + 0xf1) != 0) && (*(int *)(iVar1 + 0x41) == 0)) {
    FUN_00486520(iVar1,(char)*(undefined4 *)(iVar1 + 0x45));
  }
  iVar3 = *param_2;
  iVar4 = *(int *)(param_1 + 0x159);
  param_2 = (int *)0x0;
  if (iVar4 <= iVar9) {
    local_10 = &DAT_004a1878 + iVar4;
    local_c = (iVar9 - iVar4) + 1;
    do {
      iVar9 = (int)*(short *)(iVar3 + *local_10 * 2);
      if (iVar9 == 0) {
        param_2 = (int *)((int)param_2 + 1);
      }
      else {
        bVar6 = (byte)uVar2;
        if (iVar9 < 0) {
          uVar5 = -iVar9 >> (bVar6 & 0x1f);
          uVar8 = ~uVar5;
        }
        else {
          uVar8 = iVar9 >> (bVar6 & 0x1f);
          uVar5 = uVar8;
        }
        if (uVar5 == 0) {
          param_2 = (int *)((int)param_2 + 1);
        }
        else {
          if (*(int *)(iVar1 + 0x35) != 0) {
            FUN_004865e0(iVar1);
          }
          if (0xf < (int)param_2) {
            uVar7 = (uint)param_2 >> 4;
            param_2 = param_2 + uVar7 * -4;
            do {
              FUN_004864d0(iVar1,*(int *)(iVar1 + 0x31),0xf0);
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = 1;
          while (uVar5 = (int)uVar5 >> 1, uVar5 != 0) {
            uVar7 = uVar7 + 1;
          }
          FUN_004864d0(iVar1,*(int *)(iVar1 + 0x31),(int)param_2 * 0x10 + uVar7);
          FUN_004863c0(iVar1,uVar8,uVar7);
          param_2 = (int *)0x0;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if ((0 < (int)param_2) &&
       (iVar9 = *(int *)(iVar1 + 0x35) + 1, *(int *)(iVar1 + 0x35) = iVar9, iVar9 == 0x7fff)) {
      FUN_004865e0(iVar1);
    }
  }
  uVar5 = *(uint *)(iVar1 + 0xd);
  **(uint **)(param_1 + 0x51) = uVar5;
  *(undefined4 *)(*(int *)(param_1 + 0x51) + 4) = *(undefined4 *)(iVar1 + 0x11);
  if (*(int *)(param_1 + 0xf1) != 0) {
    uVar5 = *(uint *)(iVar1 + 0x41);
    if (uVar5 == 0) {
      *(int *)(iVar1 + 0x41) = *(int *)(param_1 + 0xf1);
      uVar5 = *(int *)(iVar1 + 0x45) + 1U & 7;
      *(uint *)(iVar1 + 0x45) = uVar5;
    }
    *(int *)(iVar1 + 0x41) = *(int *)(iVar1 + 0x41) + -1;
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


