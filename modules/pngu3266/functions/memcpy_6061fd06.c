/* Module: pngu3266.dll
   Function: memcpy
   Address: 6061fd06
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6061fd06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


