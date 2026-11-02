/* Module: vegas30k.dll
   Function: SfMpegBufferQueue
   Address: 010966c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegBufferQueue(struct tagMPEG_BUFFER *,unsigned int,unsigned __int64 *) */

void SfMpegBufferQueue(tagMPEG_BUFFER *param_1,uint param_2,__uint64 *param_3)

{
  uint local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x966c0  427  ?SfMpegBufferQueue@@YGXPAUtagMPEG_BUFFER@@IPA_K@Z */
  local_8 = (undefined4)*param_3;
  local_4 = *(undefined4 *)((int)param_3 + 4);
  local_10[0] = param_2;
  _SfList_InsertList_16(*(undefined4 *)param_1,0xffffffff,local_10,1);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
  return;
}


