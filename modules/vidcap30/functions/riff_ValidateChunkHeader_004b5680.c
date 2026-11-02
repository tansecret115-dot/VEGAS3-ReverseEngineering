/* Module: vidcap30.exe
   Function: riff_ValidateChunkHeader
   Address: 004b5680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ValidateChunkHeader,8 */

int riff_ValidateChunkHeader(undefined4 param_1,uint param_2)

{
                    /* 0xb5680  796  _riff_ValidateChunkHeader@8 */
  if ((param_2 & 0x80000000) != 0) {
    return -0x7ffb1f7d;
  }
  return (-(uint)(param_2 != 0) & 0x7ffb1f7e) + 0x8004e082;
}


