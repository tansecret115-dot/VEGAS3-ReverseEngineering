/* Module: mpgvout.dll
   Function: GetProfileIntA
   Address: 10002428
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT GetProfileIntA(LPCSTR lpAppName,LPCSTR lpKeyName,INT nDefault)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetProfileIntA(lpAppName,lpKeyName,nDefault);
  return UVar1;
}


