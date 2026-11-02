/* Module: vegas30k.dll
   Function: _SfAudio_GetMixChannelsFunction@8
   Address: 010c24f0
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetMixChannelsFunction_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0xc24f0  747  _SfAudio_GetMixChannelsFunction@8 */
  uVar1 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = _SfAudio_GetSampleType_4(param_1);
  switch(uVar2) {
  case 0x10:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c05b0;
    case 0x11:
      return (code *)&LAB_010c0610;
    case 0x12:
      return (code *)&LAB_010c0710;
    case 0x13:
      return (code *)&LAB_010c0790;
    case 0x20:
      return (code *)&LAB_010c0800;
    case 0x21:
      return (code *)&LAB_010c08a0;
    case 0x30:
      return (code *)&LAB_010c0680;
    case 0x31:
      return (code *)&LAB_010c0540;
    }
    break;
  case 0x11:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c09b0;
    case 0x11:
      return (code *)&LAB_010c0a20;
    case 0x12:
      return (code *)&LAB_010c0b20;
    case 0x13:
      return (code *)&LAB_010c0b90;
    case 0x20:
      return (code *)&LAB_010c0c00;
    case 0x21:
      return (code *)&LAB_010c0cb0;
    case 0x30:
      return (code *)&LAB_010c0a90;
    case 0x31:
      return (code *)&LAB_010c0940;
    }
    break;
  case 0x12:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c12a0;
    case 0x11:
      return (code *)&LAB_010c1390;
    case 0x12:
      return (code *)&LAB_010c1580;
    case 0x13:
      return (code *)&LAB_010c1690;
    case 0x20:
      return (code *)&LAB_010c1780;
    case 0x21:
      return (code *)&LAB_010c1870;
    case 0x30:
      return (code *)&LAB_010c1490;
    case 0x31:
      return (code *)&LAB_010c11b0;
    }
    break;
  case 0x13:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c1a00;
    case 0x11:
      return (code *)&LAB_010c1ab0;
    case 0x12:
      return (code *)&LAB_010c1c10;
    case 0x13:
      return (code *)&LAB_010c1d00;
    case 0x20:
      return (code *)&LAB_010c1db0;
    case 0x21:
      return (code *)&LAB_010c1e50;
    case 0x30:
      return (code *)&LAB_010c1b60;
    case 0x31:
      return (code *)&LAB_010c1960;
    }
    break;
  case 0x20:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c1f50;
    case 0x11:
      return (code *)&LAB_010c1fc0;
    case 0x12:
      return (code *)&LAB_010c2070;
    case 0x13:
      return (code *)&LAB_010c2100;
    case 0x20:
      return (code *)&LAB_010c2150;
    case 0x21:
      return (code *)&LAB_010c21a0;
    case 0x30:
      return (code *)&LAB_010c2020;
    case 0x31:
      return (code *)&LAB_010c1ef0;
    }
    break;
  case 0x21:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c2250;
    case 0x11:
      return (code *)&LAB_010c22b0;
    case 0x12:
      return FUN_010c2360;
    case 0x13:
      return (code *)&LAB_010c2400;
    case 0x20:
      return (code *)&LAB_010c2450;
    case 0x21:
      return (code *)&LAB_010c24a0;
    case 0x30:
      return (code *)&LAB_010c2310;
    case 0x31:
      return (code *)&LAB_010c21f0;
    }
    break;
  case 0x30:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c0de0;
    case 0x11:
      return (code *)&LAB_010c0e50;
    case 0x12:
      return (code *)&LAB_010c0f30;
    case 0x13:
      return (code *)&LAB_010c0fd0;
    case 0x20:
      return (code *)&LAB_010c1050;
    case 0x21:
      return (code *)&LAB_010c1100;
    case 0x30:
      return (code *)&LAB_010c0ec0;
    case 0x31:
      return (code *)&LAB_010c0d70;
    }
    break;
  case 0x31:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_010c0180;
    case 0x11:
      return (code *)&LAB_010c01f0;
    case 0x12:
      return (code *)&LAB_010c02f0;
    case 0x13:
      return (code *)&LAB_010c0370;
    case 0x20:
      return (code *)&LAB_010c03e0;
    case 0x21:
      return (code *)&LAB_010c0490;
    case 0x30:
      return (code *)&LAB_010c0260;
    case 0x31:
      return (code *)&LAB_010c0120;
    }
  }
  return (code *)0x0;
}


