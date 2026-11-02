/* Module: sftrans1.dll
   Function: FUN_00485e60
   Address: 00485e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00485e60(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < **(int **)(param_1 + 0x28))) {
    return *(undefined4 *)((*(int **)(param_1 + 0x28))[2] + param_2 * 4);
  }
  return 0;
}


