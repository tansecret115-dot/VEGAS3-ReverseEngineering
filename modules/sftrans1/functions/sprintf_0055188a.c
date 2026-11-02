/* Module: sftrans1.dll
   Function: sprintf
   Address: 0055188a
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0055188a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sprintf(_Dest,_Format);
  return iVar1;
}


