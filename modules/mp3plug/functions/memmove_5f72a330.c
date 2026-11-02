/* Module: mp3plug.dll
   Function: memmove
   Address: 5f72a330
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}


