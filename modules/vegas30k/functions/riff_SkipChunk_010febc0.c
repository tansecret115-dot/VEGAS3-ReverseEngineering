/* Module: vegas30k.dll
   Function: riff_SkipChunk
   Address: 010febc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SkipChunk,8 */

uint riff_SkipChunk(HANDLE param_1,uint param_2)

{
                    /* 0xfebc0  1433  _riff_SkipChunk@8 */
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  SetFilePointer(param_1,param_2,(PLONG)0x0,1);
  return param_2;
}


