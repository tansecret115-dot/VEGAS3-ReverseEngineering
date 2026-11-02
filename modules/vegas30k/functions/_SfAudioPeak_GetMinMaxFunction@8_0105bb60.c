/* Module: vegas30k.dll
   Function: _SfAudioPeak_GetMinMaxFunction@8
   Address: 0105bb60
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudioPeak_GetMinMaxFunction_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
                    /* 0x5bb60  721  _SfAudioPeak_GetMinMaxFunction@8 */
  pcVar1 = (code *)0x0;
  switch(param_1) {
  case 0:
  case 0x11:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_0105ce60;
    case 0x11:
      return (code *)&LAB_0105d240;
    case 0x12:
      return (code *)&LAB_0105d450;
    case 0x13:
      return (code *)&LAB_0105d790;
    case 0x20:
      return (code *)&LAB_0105d990;
    case 0x21:
      return FUN_0105dc50;
    case 0x31:
      return (code *)&LAB_0105d050;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_0105df10;
    case 0x11:
      return (code *)&LAB_0105e310;
    case 0x12:
      return (code *)&LAB_0105e540;
    case 0x13:
      return (code *)&LAB_0105e8a0;
    case 0x20:
      return (code *)&LAB_0105eaa0;
    case 0x21:
      pcVar1 = FUN_0105ecd0;
      break;
    case 0x31:
      return (code *)&LAB_0105e110;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_0105bd90;
    case 0x11:
      return (code *)&LAB_0105c160;
    case 0x12:
      return (code *)&LAB_0105c380;
    case 0x13:
      return (code *)&LAB_0105c6c0;
    case 0x20:
      return (code *)&LAB_0105c8c0;
    case 0x21:
      return FUN_0105cb90;
    case 0x31:
      return (code *)&LAB_0105bf70;
    }
  }
  return pcVar1;
}


