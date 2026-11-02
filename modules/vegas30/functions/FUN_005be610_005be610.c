/* Module: vegas30.exe
   Function: FUN_005be610
   Address: 005be610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005be610(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  uVar5 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = DAT_0064869c & 2;
  }
  iVar6 = 0;
  if ((*(int *)(param_1 + 4) == 3) && (uVar2 != 0)) {
    piVar1 = *(int **)(param_1 + 0x78);
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        if (piVar1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar1;
        }
        if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
        }
        if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x78) & 0x20) != 0)) {
          local_8 = 1;
        }
        else {
          local_10 = local_10 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    if (param_1 != -0x80) {
      iVar6 = FUN_00522a40(0);
      uVar5 = (uint)(iVar6 != 0);
      iVar6 = FUN_00522a40(1);
      if (iVar6 != 0) {
        uVar5 = uVar5 + 1;
      }
      iVar6 = FUN_00522a40(2);
      if (iVar6 != 0) {
        uVar5 = uVar5 + 1;
      }
    }
    iVar6 = local_c;
    if ((*(byte *)(param_1 + 0x44) & 0x40) != 0) {
      piVar1 = *(int **)(param_1 + 0x7c);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          if ((iVar3 < 0) || (iVar6 + -1 < iVar3)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(piVar1[2] + iVar3 * 4);
          }
          if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x78) & 0x20) != 0)) {
            local_4 = 1;
          }
          else {
            local_c = local_c + 1;
          }
          iVar3 = iVar3 + 1;
          iVar6 = local_c;
        } while (iVar3 < iVar4);
      }
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar7 = param_3;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *param_3 = local_8;
    param_3[1] = local_10;
    param_3[2] = uVar5;
    param_3[3] = local_4;
    param_3[4] = iVar6;
    param_3[5] = 0xffffffff;
  }
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return iVar6 + uVar5 + local_10;
}


