/* Module: mcplugrw.dll
   Function: atol
   Address: 0048b324
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl atol(char *_Str)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = atol(_Str);
  return lVar1;
}


