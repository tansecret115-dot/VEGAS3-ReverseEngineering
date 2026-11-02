/* Module: vegas30.exe
   Function: FUN_005d1250
   Address: 005d1250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d1250(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0062a148;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  if (*(int *)(param_2 + 0x244) == 0) {
    if (*(int **)(param_2 + 0x234) == (int *)0x0) {
      iVar2 = 0;
      ExceptionList = &local_14;
    }
    else {
      iVar2 = **(int **)(param_2 + 0x234);
      ExceptionList = &local_14;
    }
  }
  else {
    ExceptionList = &local_14;
    iVar2 = FUN_005d0420(param_2);
  }
  if ((-1 < param_3) && (param_3 < iVar2)) {
    piVar1 = *(int **)(param_2 + 0x234);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 + -1 < param_3) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + param_3 * 4);
    }
    if ((iVar2 != 0) && ((*(int *)(iVar2 + 4) != 0 || (*(int *)(iVar2 + 0x1c) != 0)))) {
      FUN_005b83b0(param_1,1);
      local_8 = 0;
      piVar1 = *(int **)(iVar2 + 4);
      if (piVar1 == (int *)0x0) {
        piVar1 = *(int **)(iVar2 + 0x1c);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(int *)(param_2 + 0x240) = *(int *)(param_2 + 0x240) + -1;
        }
      }
      else {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      local_8 = 0xffffffff;
      _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x234),param_3,1,1);
      FUN_005b84d0(param_1,1);
      ExceptionList = local_14;
      return 0;
    }
  }
  ExceptionList = local_14;
  return 1;
}


