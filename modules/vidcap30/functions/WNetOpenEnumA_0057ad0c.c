/* Module: vidcap30.exe
   Function: WNetOpenEnumA
   Address: 0057ad0c
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD WNetOpenEnumA(DWORD dwScope,DWORD dwType,DWORD dwUsage,LPNETRESOURCEA lpNetResource,
                   LPHANDLE lphEnum)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0057ad0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetOpenEnumA(dwScope,dwType,dwUsage,lpNetResource,lphEnum);
  return DVar1;
}


