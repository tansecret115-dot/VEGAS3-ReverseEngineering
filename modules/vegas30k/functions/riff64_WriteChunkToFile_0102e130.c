/* Module: vegas30k.dll
   Function: riff64_WriteChunkToFile
   Address: 0102e130
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_WriteChunkToFile,32 */

uint riff64_WriteChunkToFile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
                    /* 0x2e130  1409  _riff64_WriteChunkToFile@32 */
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



