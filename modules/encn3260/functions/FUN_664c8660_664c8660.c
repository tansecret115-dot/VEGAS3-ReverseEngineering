/* Module: encn3260.dll
   Function: FUN_664c8660
   Address: 664c8660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c8660(int param_1)

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


