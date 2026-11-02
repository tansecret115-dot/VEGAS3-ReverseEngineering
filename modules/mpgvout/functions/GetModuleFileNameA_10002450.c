/* Module: mpgvout.dll
   Function: GetModuleFileNameA
   Address: 10002450
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


