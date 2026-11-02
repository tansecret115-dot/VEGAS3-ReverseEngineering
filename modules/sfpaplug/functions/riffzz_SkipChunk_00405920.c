/* Module: sfpaplug.dll
   Function: riffzz_SkipChunk
   Address: 00405920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall riffzz_SkipChunk(void *,unsigned long) */

ulong riffzz_SkipChunk(void *param_1,ulong param_2)

{
  LONG local_4;
  
                    /* 0x5920  3  ?riffzz_SkipChunk@@YGKPAXK@Z */
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  local_4 = 0;
  SetFilePointer(param_1,param_2,&local_4,1);
  return param_2;
}


