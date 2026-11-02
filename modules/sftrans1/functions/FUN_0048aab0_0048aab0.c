/* Module: sftrans1.dll
   Function: FUN_0048aab0
   Address: 0048aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048aab0(int param_1,int param_2)

{
  if ((param_2 < 0) || (**(int **)(param_1 + 0xa4) <= param_2)) {
    param_2 = *(int *)(param_1 + 0x100);
  }
  return **(undefined4 **)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + param_2 * 4);
}


