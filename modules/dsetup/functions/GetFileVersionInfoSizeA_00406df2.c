/* Module: dsetup.dll
   Function: GetFileVersionInfoSizeA
   Address: 00406df2
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


