/* Module: vegas30k.dll
   Function: _SfAudio_GetCopyChannelsFunction@8
   Address: 01006630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfAudio_GetCopyChannelsFunction_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0x6630  743  _SfAudio_GetCopyChannelsFunction@8 */
  uVar1 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = _SfAudio_GetSampleType_4(param_1);
  switch(uVar2) {
  case 0x10:
    switch(uVar1) {
    case 0x10:
      return &LAB_01005160;
    case 0x11:
      return &LAB_010051a0;
    case 0x12:
      return &LAB_01005260;
    case 0x13:
      return &LAB_010052b0;
    case 0x20:
      return &LAB_01005300;
    case 0x21:
      return &LAB_01005370;
    case 0x30:
      return &LAB_010051f0;
    case 0x31:
      return &LAB_01005120;
    }
    break;
  case 0x11:
    switch(uVar1) {
    case 0x10:
      return &LAB_01005430;
    case 0x11:
      return &LAB_01005480;
    case 0x12:
      return &LAB_01005540;
    case 0x13:
      return &LAB_01005590;
    case 0x20:
      return &LAB_010055e0;
    case 0x21:
      return &LAB_01005660;
    case 0x30:
      return &LAB_010054d0;
    case 0x31:
      return &LAB_010053e0;
    }
    break;
  case 0x12:
    switch(uVar1) {
    case 0x10:
      return &LAB_01005a30;
    case 0x11:
      return &LAB_01005a90;
    case 0x12:
      return &LAB_01005b80;
    case 0x13:
      return &LAB_01005bf0;
    case 0x20:
      return &LAB_01005c60;
    case 0x21:
      return &LAB_01005cf0;
    case 0x30:
      return &LAB_01005b00;
    case 0x31:
      return &LAB_010059e0;
    }
    break;
  case 0x13:
    switch(uVar1) {
    case 0x10:
      return &LAB_01005dd0;
    case 0x11:
      return &LAB_01005e20;
    case 0x12:
      return &LAB_01005ee0;
    case 0x13:
      return &LAB_01005f60;
    case 0x20:
      return &LAB_01005fb0;
    case 0x21:
      return &LAB_01006040;
    case 0x30:
      return &LAB_01005e70;
    case 0x31:
      return &LAB_01005d80;
    }
    break;
  case 0x20:
    switch(uVar1) {
    case 0x10:
      return &LAB_01006120;
    case 0x11:
      return &LAB_01006180;
    case 0x12:
      return &LAB_01006220;
    case 0x13:
      return &LAB_010062a0;
    case 0x20:
      return &LAB_010062f0;
    case 0x21:
      return &LAB_01006340;
    case 0x30:
      return &LAB_010061d0;
    case 0x31:
      return &LAB_010060d0;
    }
    break;
  case 0x21:
    switch(uVar1) {
    case 0x10:
      return &LAB_010063d0;
    case 0x11:
      return &LAB_01006430;
    case 0x12:
      return &LAB_010064d0;
    case 0x13:
      return &LAB_01006550;
    case 0x20:
      return &LAB_010065a0;
    case 0x21:
      return &LAB_010065e0;
    case 0x30:
      return &LAB_01006480;
    case 0x31:
      return &LAB_01006380;
    }
    break;
  case 0x30:
    switch(uVar1) {
    case 0x10:
      return &LAB_01005730;
    case 0x11:
      return &LAB_01005780;
    case 0x12:
      return &LAB_01005820;
    case 0x13:
      return &LAB_01005890;
    case 0x20:
      return &LAB_010058e0;
    case 0x21:
      return &LAB_01005960;
    case 0x30:
      return &LAB_010057d0;
    case 0x31:
      return &LAB_010056e0;
    }
    break;
  case 0x31:
    switch(uVar1) {
    case 0x10:
      return &LAB_01004ed0;
    case 0x11:
      return &LAB_01004f10;
    case 0x12:
      return &LAB_01004fb0;
    case 0x13:
      return &LAB_01004ff0;
    case 0x20:
      return &LAB_01005040;
    case 0x21:
      return &LAB_010050b0;
    case 0x30:
      return &LAB_01004f50;
    case 0x31:
      return &LAB_01004e90;
    }
  }
  return (undefined1 *)0x0;
}


