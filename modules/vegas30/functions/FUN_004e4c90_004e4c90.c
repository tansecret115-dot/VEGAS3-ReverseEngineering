/* Module: vegas30.exe
   Function: FUN_004e4c90
   Address: 004e4c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e4c90(void)

{
  if (DAT_0064762c == 0) {
    return 0;
  }
  if (*(int *)(DAT_0064762c + 0x70) == 0) {
    return 0;
  }
  return *(int *)(DAT_0064762c + 0x70) + 0x80;
}


