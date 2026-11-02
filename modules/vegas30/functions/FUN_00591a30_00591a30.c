/* Module: vegas30.exe
   Function: FUN_00591a30
   Address: 00591a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00591a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_1) {
  case 0x3e9:
    _SfAudio_CopyChannelToChannel_20(param_3,param_2,1,0,param_4);
    return;
  case 0x3ea:
    _SfAudio_CopyChannelToChannel_20(param_3,param_2,0,1,param_4);
    return;
  case 0x3eb:
    _SfAudio_MuteChannel_16(param_3,param_2,0,param_4);
    return;
  case 0x3ec:
    _SfAudio_MuteChannel_16(param_3,param_2,1,param_4);
    return;
  case 0x3ed:
    _SfAudio_MonoChannel_16(param_3,param_3,param_2,param_4);
    return;
  case 0x3ee:
    _SfAudio_SwapStereoChannels_12(param_3,param_2,param_4);
  }
  return;
}


