/* Module: vidcap30.exe
   Function: riff64_WriteChunkToFile
   Address: 004b77f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_WriteChunkToFile,32 */

uint riff64_WriteChunkToFile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
                    /* 0xb77f0  770  _riff64_WriteChunkToFile@32 */
  uVar1 = riff64_PrepareChunk(param_1,param_2,param_3,param_4,param_5,&param_2);
  if (-1 < (int)uVar1) {
    uVar1 = riff64_WriteToFile(param_1,param_6,param_7,param_8);
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,param_2,param_3);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


