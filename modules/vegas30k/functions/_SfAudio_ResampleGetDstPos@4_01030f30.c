/* Module: vegas30k.dll
   Function: _SfAudio_ResampleGetDstPos@4
   Address: 01030f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 _SfAudio_ResampleGetDstPos_4(int param_1)

{
                    /* 0x30f30  763  _SfAudio_ResampleGetDstPos@4 */
  return CONCAT44(*(int *)(param_1 + 0x1d54) + *(int *)(param_1 + 0x1d44) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x1d50),*(uint *)(param_1 + 0x1d40)),
                  *(uint *)(param_1 + 0x1d50) + *(uint *)(param_1 + 0x1d40));
}


