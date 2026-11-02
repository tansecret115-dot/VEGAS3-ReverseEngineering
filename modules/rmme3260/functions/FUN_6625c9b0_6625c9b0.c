/* Module: rmme3260.dll
   Function: FUN_6625c9b0
   Address: 6625c9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625c9b0(int param_1)

{
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x36) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x36) + 0x20))();
    *(undefined4 *)(param_1 + 0x36) = 0;
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
  }
  return;
}


