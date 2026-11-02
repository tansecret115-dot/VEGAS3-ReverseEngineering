/* Module: mpgvout.001
   Function: malloc
   Address: 10032bcc
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


