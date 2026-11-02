/* Module: vidcap30.exe
   Function: FUN_00454740
   Address: 00454740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454740(int param_1,int param_2)

{
  if (param_2 != 0) {
    return **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + *(int *)(param_1 + 0x30) * 4);
  }
  return *(undefined4 *)(param_1 + 0x30);
}


