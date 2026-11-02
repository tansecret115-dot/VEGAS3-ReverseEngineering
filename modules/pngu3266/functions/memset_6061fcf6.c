/* Module: pngu3266.dll
   Function: memset
   Address: 6061fcf6
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6061fcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


