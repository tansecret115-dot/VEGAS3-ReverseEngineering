/* Module: mcplugrw.dll
   Function: rand
   Address: 0048b342
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048b342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}


