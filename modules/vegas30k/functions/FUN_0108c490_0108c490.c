/* Module: vegas30k.dll
   Function: FUN_0108c490
   Address: 0108c490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108c490(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x134) != 0) {
    *(undefined4 *)(param_1 + 0x138) = param_2;
    return 1;
  }
  return 0;
}


