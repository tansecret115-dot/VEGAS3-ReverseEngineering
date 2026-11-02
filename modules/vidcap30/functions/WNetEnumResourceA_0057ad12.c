/* Module: vidcap30.exe
   Function: WNetEnumResourceA
   Address: 0057ad12
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD WNetEnumResourceA(HANDLE hEnum,LPDWORD lpcCount,LPVOID lpBuffer,LPDWORD lpBufferSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057ad12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetEnumResourceA(hEnum,lpcCount,lpBuffer,lpBufferSize);
  return DVar1;
}


