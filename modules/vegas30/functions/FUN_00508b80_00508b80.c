/* Module: vegas30.exe
   Function: FUN_00508b80
   Address: 00508b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508b80(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(undefined4 **)(param_1 + 0x120) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x120);
}


