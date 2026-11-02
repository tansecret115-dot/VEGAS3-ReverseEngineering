/* Module: mp3plug.dll
   Function: malloc
   Address: 5f72a248
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


