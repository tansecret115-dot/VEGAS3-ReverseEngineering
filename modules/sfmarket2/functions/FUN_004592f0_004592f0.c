/* Module: sfmarket2.dll
   Function: FUN_004592f0
   Address: 004592f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004592f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1b9);
  if (*(char *)(iVar1 + 0x11) != '\0') {
    return 2;
  }
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1bd) + 4))(param_1);
  if (iVar2 == 1) {
    if (*(char *)(iVar1 + 0x12) != '\0') {
      FUN_004593b0(param_1);
      *(undefined1 *)(iVar1 + 0x12) = 0;
      return 1;
    }
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x22;
      (**(code **)*param_1)(param_1);
    }
    FUN_00459040(param_1);
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    if (*(char *)(iVar1 + 0x12) == '\0') {
      if (*(int *)((int)param_1 + 0xae) < *(int *)((int)param_1 + 0xb6)) {
        *(int *)((int)param_1 + 0xb6) = *(int *)((int)param_1 + 0xae);
        return 2;
      }
    }
    else if (*(char *)(*(int *)((int)param_1 + 0x1bd) + 0x51) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x3a;
      (**(code **)*param_1)(param_1);
      return 2;
    }
  }
  return iVar2;
}


