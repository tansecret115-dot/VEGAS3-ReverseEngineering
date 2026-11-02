/* Module: sfppack2.dll
   Function: FUN_5cd26500
   Address: 5cd26500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd26500(HLOCAL param_1)

{
  if (param_1 == (HLOCAL)0x0) {
    return 0;
  }
  LocalFree(param_1);
  return 1;
}


