/* Module: sfpublish.dll
   Function: FUN_00415b30
   Address: 00415b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00415b30(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(FILE **)(param_1 + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


