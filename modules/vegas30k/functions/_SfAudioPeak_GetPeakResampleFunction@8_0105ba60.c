/* Module: vegas30k.dll
   Function: _SfAudioPeak_GetPeakResampleFunction@8
   Address: 0105ba60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfAudioPeak_GetPeakResampleFunction_8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  
                    /* 0x5ba60  722  _SfAudioPeak_GetPeakResampleFunction@8 */
  puVar1 = (undefined1 *)0x0;
  switch(param_1) {
  case 0:
  case 0x11:
    if (param_2 == 0) {
      return &LAB_0105b3c0;
    }
    break;
  case 0x13:
    if (param_2 == 0) {
      return &LAB_0105b5f0;
    }
    break;
  case 0x20:
    if (param_2 == 0) {
      puVar1 = &LAB_0105b7e0;
    }
    break;
  case 0x31:
    if (param_2 == 0) {
      return &LAB_0105b1b0;
    }
  }
  return puVar1;
}


