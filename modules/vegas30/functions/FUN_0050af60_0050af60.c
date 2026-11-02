/* Module: vegas30.exe
   Function: FUN_0050af60
   Address: 0050af60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0050af60(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0x1000) == 0) {
    return *(undefined8 *)(*(int *)(param_1 + 0x90) + 0x18);
  }
  return 0;
}


