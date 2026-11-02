/* Module: vidcap30.exe
   Function: FUN_004437e0
   Address: 004437e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004437e0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + param_2 * 4);
}


