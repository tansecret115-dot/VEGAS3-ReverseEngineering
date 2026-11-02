/* Module: mpgvout.dll
   Function: LoadLibraryA
   Address: 10002458
   Source: Ghidra pseudocode (Stage 10 batch) */


HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


