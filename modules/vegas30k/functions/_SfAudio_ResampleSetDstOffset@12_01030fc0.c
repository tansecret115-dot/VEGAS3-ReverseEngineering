/* Module: vegas30k.dll
   Function: _SfAudio_ResampleSetDstOffset@12
   Address: 01030fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_ResampleSetDstOffset_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x30fc0  770  _SfAudio_ResampleSetDstOffset@12 */
  *(undefined4 *)(param_1 + 0x1d50) = param_2;
  *(undefined4 *)(param_1 + 0x1d54) = param_3;
  return;
}


