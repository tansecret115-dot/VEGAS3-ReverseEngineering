/* Module: vfplugs.dll
   Function: FUN_00477830
   Address: 00477830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00477830(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


