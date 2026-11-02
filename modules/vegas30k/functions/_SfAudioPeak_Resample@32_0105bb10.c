/* Module: vegas30k.dll
   Function: _SfAudioPeak_Resample@32
   Address: 0105bb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudioPeak_Resample_32
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  
                    /* 0x5bb10  724  _SfAudioPeak_Resample@32 */
  pcVar1 = (code *)_SfAudioPeak_GetPeakResampleFunction_8(param_1,param_3 < param_4);
  if (pcVar1 == (code *)0x0) {
    return 0x8000ffff;
  }
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0;
}


