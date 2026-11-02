/* Module: rmbe3260.dll
   Function: FUN_6605b280
   Address: 6605b280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605b280(int param_1)

{
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      operator_delete(*(void **)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(*(undefined4 *)(param_1 + 0x10));
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))();
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  return;
}


