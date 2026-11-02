/* Module: vegas30k.dll
   Function: _SfAudio_ResampleGetSrcPos@4
   Address: 01030f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 _SfAudio_ResampleGetSrcPos_4(int param_1)

{
                    /* 0x30f00  765  _SfAudio_ResampleGetSrcPos@4 */
  return CONCAT44(*(int *)(param_1 + 0x1d4c) + *(int *)(param_1 + 0x1d3c) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x1d48),*(uint *)(param_1 + 0x1d38)),
                  *(uint *)(param_1 + 0x1d48) + *(uint *)(param_1 + 0x1d38));
}


