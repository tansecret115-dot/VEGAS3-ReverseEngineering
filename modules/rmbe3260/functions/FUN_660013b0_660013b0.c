/* Module: rmbe3260.dll
   Function: FUN_660013b0
   Address: 660013b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660013b0(int param_1)

{
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x108))(1);
    }
  }
  return;
}


