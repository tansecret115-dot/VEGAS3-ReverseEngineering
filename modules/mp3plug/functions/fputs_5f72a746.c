/* Module: mp3plug.dll
   Function: fputs
   Address: 5f72a746
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fputs(char *_Str,FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fputs(_Str,_File);
  return iVar1;
}


