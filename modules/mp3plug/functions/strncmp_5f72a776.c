/* Module: mp3plug.dll
   Function: strncmp
   Address: 5f72a776
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}


