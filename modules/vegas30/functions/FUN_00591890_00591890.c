/* Module: vegas30.exe
   Function: FUN_00591890
   Address: 00591890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00591890(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  float10 fVar6;
  int local_2c;
  int local_20;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00629888;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_20 = 1;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x244) == 0) {
    if (*(int **)(param_1 + 0x234) == (int *)0x0) {
      local_2c = 0;
      ExceptionList = &local_14;
    }
    else {
      local_2c = **(int **)(param_1 + 0x234);
      ExceptionList = &local_14;
    }
    for (; iVar5 < local_2c; iVar5 = iVar5 + 1) {
      local_8 = 0;
      piVar1 = *(int **)(param_1 + 0x234);
      iVar3 = 0;
      if (piVar1 != (int *)0x0) {
        iVar3 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar3 + -1 < iVar5)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar4 = *(uint **)(piVar1[2] + iVar5 * 4);
      }
      else {
        puVar4 = (uint *)0x0;
      }
      if ((puVar4 != (uint *)0x0) && ((*puVar4 & 2) == 0)) {
        if ((*puVar4 & 1) == 0) {
          iVar3 = (**(code **)(*(int *)puVar4[1] + 0xc))
                            ((int *)puVar4[1],2,*(undefined4 *)(param_2 + 4));
          if (iVar3 < 0) {
            ExceptionList = local_14;
            return iVar3;
          }
          *puVar4 = *puVar4 | 1;
        }
        if ((*puVar4 & 1) != 0) {
          if (param_5 == 0) {
            iVar3 = (**(code **)(*(int *)puVar4[1] + 0x1c))();
            if (iVar3 != 1) goto LAB_0059197c;
          }
          else {
LAB_0059197c:
            iVar3 = *(int *)puVar4[1];
            fVar6 = (float10)FUN_005c5b10();
            (**(code **)(iVar3 + 0x20))(puVar4[1],param_5,(double)fVar6);
          }
          iVar3 = (**(code **)(*(int *)puVar4[1] + 0x10))((int *)puVar4[1],param_3);
          if (iVar3 != 1) {
            local_20 = 0;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_20;
}


