/* Module: mpgvout.003
   Function: memset
   Address: 10032a44
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


