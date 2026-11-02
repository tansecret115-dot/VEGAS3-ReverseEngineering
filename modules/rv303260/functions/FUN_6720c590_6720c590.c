/* Module: rv303260.dll
   Function: FUN_6720c590
   Address: 6720c590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6720c590(int param_1)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    if (*(FILE **)(param_1 + 0x1ce) != (FILE *)0x0) {
      fclose(*(FILE **)(param_1 + 0x1ce));
      *(undefined4 *)(param_1 + 0x1ce) = 0;
    }
    FUN_6720dbd0(param_1);
  }
  return 0;
}


