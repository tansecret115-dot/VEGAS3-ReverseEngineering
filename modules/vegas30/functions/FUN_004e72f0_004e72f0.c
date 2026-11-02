/* Module: vegas30.exe
   Function: FUN_004e72f0
   Address: 004e72f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e72f0(void)

{
  if (DAT_0064ce18 != 0) {
    KillTimer(DAT_00647624,DAT_0064ce18);
    DAT_0064ce18 = 0;
  }
  return;
}


