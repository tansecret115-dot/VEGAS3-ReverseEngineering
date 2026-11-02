/* Module: mpgvout.002
   Function: fclose
   Address: 10032b28
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fclose(FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fclose(_File);
  return iVar1;
}


