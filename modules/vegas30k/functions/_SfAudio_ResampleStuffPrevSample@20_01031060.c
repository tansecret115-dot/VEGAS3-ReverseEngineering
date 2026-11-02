/* Module: vegas30k.dll
   Function: _SfAudio_ResampleStuffPrevSample@20
   Address: 01031060
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_ResampleStuffPrevSample_20
               (int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x31060  774  _SfAudio_ResampleStuffPrevSample@20 */
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}


