/* Module: vegas30k.dll
   Function: riff_ValidateChunkHeader
   Address: 010feb50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ValidateChunkHeader,8 */

int riff_ValidateChunkHeader(undefined4 param_1,uint param_2)

{
                    /* 0xfeb50  1435  _riff_ValidateChunkHeader@8 */
  if ((param_2 & 0x80000000) != 0) {
    return -0x7ffb1f7d;
  }
  return (-(uint)(param_2 != 0) & 0x7ffb1f7e) + 0x8004e082;
}


