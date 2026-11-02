/* Module: vidcap30.exe
   Function: riff64_PrepareChunk
   Address: 004b7860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_PrepareChunk,24 */

uint riff64_PrepareChunk(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
                    /* 0xb7860  752  _riff64_PrepareChunk@24 */
  riff64_SaveLocation(param_1,param_6);
  uVar1 = riff64_WriteChunkHeader(param_1,param_2,param_3,param_4,param_5,0,0);
  return uVar1 & (-1 < (int)uVar1) - 1;
}


