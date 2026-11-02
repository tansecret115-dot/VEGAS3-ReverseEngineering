/* Module: mp3plug.dll
   Function: strrchr
   Address: 5f72a728
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strrchr(_Str,_Ch);
  return pcVar1;
}


