/* Module: sfpublish.dll
   Function: FUN_00413ad0
   Address: 00413ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413ad0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      (**(code **)**(int **)(param_1 + 0x2c))();
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  return 0;
}


