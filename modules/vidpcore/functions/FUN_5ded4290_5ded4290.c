/* Module: vidpcore.dll
   Function: FUN_5ded4290
   Address: 5ded4290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded4290(HLOCAL param_1)

{
  if (param_1 == (HLOCAL)0x0) {
    return 0;
  }
  LocalFree(param_1);
  return 1;
}


