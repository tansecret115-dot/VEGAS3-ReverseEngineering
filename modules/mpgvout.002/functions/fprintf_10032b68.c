/* Module: mpgvout.002
   Function: fprintf
   Address: 10032b68
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fprintf(_File,_Format);
  return iVar1;
}


