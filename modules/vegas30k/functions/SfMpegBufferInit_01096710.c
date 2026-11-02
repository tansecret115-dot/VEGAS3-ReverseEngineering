/* Module: vegas30k.dll
   Function: SfMpegBufferInit
   Address: 01096710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegBufferInit(struct tagMPEG_BUFFER *,unsigned int) */

void SfMpegBufferInit(tagMPEG_BUFFER *param_1,uint param_2)

{
                    /* 0x96710  426  ?SfMpegBufferInit@@YGXPAUtagMPEG_BUFFER@@I@Z */
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_2;
  return;
}


