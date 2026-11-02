/* Module: vidcap30.exe
   Function: FUN_00416ad0
   Address: 00416ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416ad0(void)

{
  if (DAT_005bc28c != 0) {
    KillTimer(DAT_005ba4bc,DAT_005bc28c);
    DAT_005bc28c = 0;
  }
  return;
}


