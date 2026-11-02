/* Module: vegas30.exe
   Function: FUN_004124c0
   Address: 004124c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004124c0(void)

{
  if (DAT_0064762c != 0) {
    if (*(int *)(DAT_0064762c + 0xa0) != 0) {
      FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
    }
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
      FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
    }
  }
  return;
}


