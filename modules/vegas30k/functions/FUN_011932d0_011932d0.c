/* Module: vegas30k.dll
   Function: FUN_011932d0
   Address: 011932d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011932d0(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x17c))(param_2);
  }
  return;
}


