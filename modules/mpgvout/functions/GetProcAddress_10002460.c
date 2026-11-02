/* Module: mpgvout.dll
   Function: GetProcAddress
   Address: 10002460
   Source: Ghidra pseudocode (Stage 10 batch) */


FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


