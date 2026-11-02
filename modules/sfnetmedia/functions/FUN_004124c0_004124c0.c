/* Module: sfnetmedia.dll
   Function: FUN_004124c0
   Address: 004124c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004124c0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(FILE **)(param_1 + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


