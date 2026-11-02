/* Module: vidcap30.exe
   Function: _SfAudio_ResampleSetSrcOffset@12
   Address: 004bfa20
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_ResampleSetSrcOffset_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0xbfa20  253  _SfAudio_ResampleSetSrcOffset@12 */
  *(undefined4 *)(param_1 + 0x1d48) = param_2;
  *(undefined4 *)(param_1 + 0x1d4c) = param_3;
  return;
}


