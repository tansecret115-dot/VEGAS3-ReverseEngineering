/* Module: mp3rw.dll
   Function: FUN_00447c90
   Address: 00447c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00447c90(int param_1)

{
  if (*(char *)(param_1 + 0x11b) != '\0') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
    return 7;
  }
  return 1;
}


