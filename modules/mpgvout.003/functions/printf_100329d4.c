/* Module: mpgvout.003
   Function: printf
   Address: 100329d4
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl printf(char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100329d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = printf(_Format);
  return iVar1;
}


