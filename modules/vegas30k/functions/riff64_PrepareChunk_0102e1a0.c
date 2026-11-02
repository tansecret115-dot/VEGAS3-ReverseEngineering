/* Module: vegas30k.dll
   Function: riff64_PrepareChunk
   Address: 0102e1a0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_PrepareChunk,24 */

uint riff64_PrepareChunk(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
                    /* 0x2e1a0  1391  _riff64_PrepareChunk@24 */
  riff64_SaveLocation(param_1,param_6);
  uVar1 = riff64_WriteChunkHeader(param_1,param_2,param_3,param_4,param_5,0,0);
  return uVar1 & (-1 < (int)uVar1) - 1;
}



