/* Module: vegas30k.dll
   Function: _SfAudioPeak_CalcMinMax@40
   Address: 0105ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudioPeak_CalcMinMax_40
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  undefined4 uVar2;
  
                    /* 0x5ef10  718  _SfAudioPeak_CalcMinMax@40 */
  pcVar1 = (code *)_SfAudioPeak_GetMinMaxFunction_8(param_2,param_1);
  if (pcVar1 == (code *)0x0) {
    return 1;
  }
  uVar2 = (*pcVar1)(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return uVar2;
}


