/* Module: Setup.exe
   Function: rand
   Address: 004324d4
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004324d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}


