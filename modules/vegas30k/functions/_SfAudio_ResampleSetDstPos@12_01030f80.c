/* Module: vegas30k.dll
   Function: _SfAudio_ResampleSetDstPos@12
   Address: 01030f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_ResampleSetDstPos_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x30f80  771  _SfAudio_ResampleSetDstPos@12 */
  *(undefined4 *)(param_1 + 0x1d40) = param_2;
  *(undefined4 *)(param_1 + 0x1d44) = param_3;
  return;
}


