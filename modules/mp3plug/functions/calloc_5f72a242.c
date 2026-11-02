/* Module: mp3plug.dll
   Function: calloc
   Address: 5f72a242
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}


