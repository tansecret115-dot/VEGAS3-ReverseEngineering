/* Module: vegas30k.dll
   Function: iff_SkipChunk
   Address: 011206f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_SkipChunk,8 */

uint iff_SkipChunk(HANDLE param_1,uint param_2)

{
                    /* 0x1206f0  1378  _iff_SkipChunk@8 */
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  SetFilePointer(param_1,param_2,(PLONG)0x0,1);
  return param_2;
}


