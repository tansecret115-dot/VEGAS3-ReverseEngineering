/* Module: sfs4rw.dll
   Function: sscanf
   Address: 0048b47c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sscanf(_Src,_Format);
  return iVar1;
}


