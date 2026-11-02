/* Module: vegas30k.dll
   Function: WNetOpenEnumA
   Address: 011d8e7a
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD WNetOpenEnumA(DWORD dwScope,DWORD dwType,DWORD dwUsage,LPNETRESOURCEA lpNetResource,
                   LPHANDLE lphEnum)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x011d8e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetOpenEnumA(dwScope,dwType,dwUsage,lpNetResource,lphEnum);
  return DVar1;
}


