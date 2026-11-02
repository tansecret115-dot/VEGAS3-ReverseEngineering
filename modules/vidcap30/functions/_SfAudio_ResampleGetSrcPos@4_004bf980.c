/* Module: vidcap30.exe
   Function: _SfAudio_ResampleGetSrcPos@4
   Address: 004bf980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 _SfAudio_ResampleGetSrcPos_4(int param_1)

{
                    /* 0xbf980  246  _SfAudio_ResampleGetSrcPos@4 */
  return CONCAT44(*(int *)(param_1 + 0x1d4c) + *(int *)(param_1 + 0x1d3c) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x1d48),*(uint *)(param_1 + 0x1d38)),
                  *(uint *)(param_1 + 0x1d48) + *(uint *)(param_1 + 0x1d38));
}


