/* Module: rv203260.dll
   Function: FUN_638ad2f0
   Address: 638ad2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638ad2f0(int param_1)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    if (*(FILE **)(param_1 + 0x1c6) != (FILE *)0x0) {
      fclose(*(FILE **)(param_1 + 0x1c6));
      *(undefined4 *)(param_1 + 0x1c6) = 0;
    }
    FUN_638ae690(param_1);
  }
  return 0;
}


