/* Module: vegas30k.dll
   Function: GetFileVersionInfoSizeA
   Address: 011d7edc
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x011d7edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


