/* Module: mp3plug.dll
   Function: strtol
   Address: 5f72a77c
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl strtol(char *_Str,char **_EndPtr,int _Radix)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = strtol(_Str,_EndPtr,_Radix);
  return lVar1;
}


