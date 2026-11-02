/* Module: vfplugs.dll
   Function: rand
   Address: 00481c56
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00481c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}


