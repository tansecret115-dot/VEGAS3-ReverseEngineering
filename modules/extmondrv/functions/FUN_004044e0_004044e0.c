/* Module: extmondrv.dll
   Function: FUN_004044e0
   Address: 004044e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004044e0(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_004044a0((int)param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


