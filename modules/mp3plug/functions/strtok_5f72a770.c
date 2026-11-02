/* Module: mp3plug.dll
   Function: strtok
   Address: 5f72a770
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strtok(char *_Str,char *_Delim)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strtok(_Str,_Delim);
  return pcVar1;
}


