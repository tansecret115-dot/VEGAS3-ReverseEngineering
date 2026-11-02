/* Module: vegas30.exe
   Function: FUN_0040c120
   Address: 0040c120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c120(void)

{
  if (*(int *)(DAT_0064762c + 0xc4) != 0) {
    return *(undefined4 *)(*(int *)(DAT_0064762c + 0xc4) + 8);
  }
  return 0;
}


