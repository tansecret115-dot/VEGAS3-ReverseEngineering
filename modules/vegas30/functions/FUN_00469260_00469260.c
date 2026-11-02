/* Module: vegas30.exe
   Function: FUN_00469260
   Address: 00469260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00469260(int param_1)

{
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 0xcd0) != (undefined4 *)0x0)) {
    return **(undefined4 **)(param_1 + 0xcd0);
  }
  return 0;
}


