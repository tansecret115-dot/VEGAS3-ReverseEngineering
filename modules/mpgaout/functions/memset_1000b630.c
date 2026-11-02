/* Module: mpgaout.dll
   Function: memset
   Address: 1000b630
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


