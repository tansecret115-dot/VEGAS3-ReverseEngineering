/* Module: vidcap30.exe
   Function: _SfAudio_ResampleSetSrcPos@12
   Address: 004bf9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_ResampleSetSrcPos_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0xbf9e0  254  _SfAudio_ResampleSetSrcPos@12 */
  *(undefined4 *)(param_1 + 0x1d38) = param_2;
  *(undefined4 *)(param_1 + 0x1d3c) = param_3;
  return;
}


