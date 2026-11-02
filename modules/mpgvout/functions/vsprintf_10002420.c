/* Module: mpgvout.dll
   Function: vsprintf
   Address: 10002420
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = vsprintf(_Dest,_Format,_Args);
  return iVar1;
}


