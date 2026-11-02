/* Module: vegas30.exe
   Function: FUN_00433850
   Address: 00433850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00433850(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  FUN_005b83b0(param_1,1);
  if (*(int **)(param_1 + 0x1dc) == (int *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = **(int **)(param_1 + 0x1dc);
  }
  local_8 = 0;
  if (0 < local_10) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + local_8 * 4);
      piVar2 = *(int **)(iVar1 + 0x24);
      if (piVar2 == (int *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = *piVar2;
      }
      local_c = 0;
      if (0 < local_14) {
        do {
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + local_c * 4);
          iVar4 = FUN_005c68e0(uVar3);
          while (iVar4 = iVar4 + -1, -1 < iVar4) {
            iVar5 = FUN_005c6910(uVar3,iVar4);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == param_2)) {
              if (param_4 != 0) {
                iVar6 = FUN_004e9f70(param_1,0x243,0);
              }
              if (-1 < iVar6) {
                if (param_4 != 0) {
                  iVar6 = FUN_004ea750(param_1,uVar3,2,0);
                }
                if (-1 < iVar6) {
                  iVar6 = FUN_005c7640(iVar5,param_3);
                  if (iVar6 < 0) {
                    if (param_4 != 0) {
                      FUN_004ea040(param_1,1);
                    }
                    break;
                  }
                  if (param_4 != 0) {
                    FUN_004eb2b0(param_1);
                    FUN_004ea040(param_1,0);
                  }
                }
              }
            }
          }
          local_c = local_c + 1;
        } while (local_c < local_14);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  FUN_005b8da0(param_1,0,1);
  FUN_005b84d0(param_1,1);
  return iVar6;
}


