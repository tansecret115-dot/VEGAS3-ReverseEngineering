/* Module: vidcap30.exe
   Function: FUN_00406060
   Address: 00406060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406060(int param_1)

{
  if ((DAT_005bbcf0 == 0) && ((*(byte *)(param_1 + 4) & 4) == 0)) {
    DAT_005bbcf0 = 1;
    UpdateWindow(DAT_005ba4bc);
    FUN_0042fa30(DAT_005bb838);
    DAT_005bbcf0 = 0;
  }
  return;
}


