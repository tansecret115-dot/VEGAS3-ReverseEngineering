/* Module: mp3plug.dll
   Function: fprintf
   Address: 5f72a740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fprintf(_File,_Format);
  return iVar1;
}


