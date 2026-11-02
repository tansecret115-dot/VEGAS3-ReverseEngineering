/* Module: mp3plug.dll
   Function: sscanf
   Address: 5f72a4ea
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a4ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sscanf(_Src,_Format);
  return iVar1;
}


