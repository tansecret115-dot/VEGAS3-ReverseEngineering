/* Module: sfxpfx1.dll
   Function: rand
   Address: 5c988632
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5c988632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}


