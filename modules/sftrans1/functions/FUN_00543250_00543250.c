/* Module: sftrans1.dll
   Function: FUN_00543250
   Address: 00543250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00543250(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    fclose(*(FILE **)(param_1 + 0x10));
  }
  return;
}


