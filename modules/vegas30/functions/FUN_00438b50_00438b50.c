/* Module: vegas30.exe
   Function: FUN_00438b50
   Address: 00438b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00438b50(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0xc) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


