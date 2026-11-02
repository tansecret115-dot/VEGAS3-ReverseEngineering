/* Module: mp3plug.dll
   Function: strncpy
   Address: 5f72a704
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strncpy(_Dest,_Source,_Count);
  return pcVar1;
}


