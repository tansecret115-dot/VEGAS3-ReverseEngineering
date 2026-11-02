/* Module: mcmpgdec.dll
   Function: sprintf
   Address: 10026674
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10026674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sprintf(_Dest,_Format);
  return iVar1;
}


