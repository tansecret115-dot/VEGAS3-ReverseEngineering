/* Module: wavplug.dll
   Function: FUN_5f3b10e0
   Address: 5f3b10e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f3b10e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3ab6b0;
    case 0x11:
      return &LAB_5f3ab750;
    case 0x12:
      return &LAB_5f3ab8a0;
    case 0x13:
      return &LAB_5f3ab960;
    case 0x20:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dab70;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dab70)[uVar1];
    case 0x21:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dab8c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dab8c)[uVar1];
    case 0x30:
      return &LAB_5f3ab7f0;
    case 0x31:
      return &LAB_5f3ab620;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3ac290;
    case 0x11:
      return &LAB_5f3ac340;
    case 0x12:
      return &LAB_5f3ac8e0;
    case 0x13:
      return &LAB_5f3aca90;
    case 0x20:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3daba8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3daba8)[uVar1];
    case 0x21:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dabc4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dabc4)[uVar1];
    case 0x30:
      return &LAB_5f3ac830;
    case 0x31:
      return &LAB_5f3ac1f0;
    case 0x40:
      return FUN_5f3ac3e0;
    case 0x41:
      return &LAB_5f3ac9a0;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3ae440;
    case 0x11:
      return &LAB_5f3ae510;
    case 0x12:
      return FUN_5f3ae6c0;
    case 0x13:
      return &LAB_5f3ae790;
    case 0x20:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dabe0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dabe0)[uVar1];
    case 0x21:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dabfc;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dabfc)[uVar1];
    case 0x30:
      return &LAB_5f3ae5f0;
    case 0x31:
      return &LAB_5f3ae380;
    case 0x41:
      return &LAB_5f3adf00;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3af640;
    case 0x11:
      return &LAB_5f3af700;
    case 0x12:
      return &LAB_5f3af890;
    case 0x13:
      return &LAB_5f3af9b0;
    case 0x20:
      return &LAB_5f3afc70;
    case 0x21:
      return &LAB_5f3afd40;
    case 0x30:
      return &LAB_5f3af7c0;
    case 0x31:
      return &LAB_5f3af580;
    case 0x42:
      return FUN_5f3afa50;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3b0100;
    case 0x11:
      uVar1 = FUN_5f399100(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f3dac18;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f3dac18)[uVar1];
    case 0x12:
      return &LAB_5f3b0700;
    case 0x13:
      return &LAB_5f3b08b0;
    case 0x20:
      return &LAB_5f3b09e0;
    case 0x21:
      return &LAB_5f3b0a30;
    case 0x30:
      return &LAB_5f3b0680;
    case 0x31:
      return &LAB_5f3b0070;
    case 0x40:
      return &LAB_5f3b05c0;
    case 0x41:
      return &LAB_5f3b07e0;
    case 0x42:
      return &LAB_5f3b0920;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3b0b20;
    case 0x11:
      return &LAB_5f3b0bb0;
    case 0x12:
      return FUN_5f3b0d80;
    case 0x13:
      return &LAB_5f3b0f80;
    case 0x20:
      return &LAB_5f3b1000;
    case 0x21:
      return &LAB_5f3b1070;
    case 0x30:
      return &LAB_5f3b0d00;
    case 0x31:
      return &LAB_5f3b0a90;
    case 0x40:
      return FUN_5f3b0c40;
    case 0x41:
      return FUN_5f3b0e70;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3ad600;
    case 0x11:
      return &LAB_5f3ad6b0;
    case 0x12:
      return &LAB_5f3ad7e0;
    case 0x13:
      return &LAB_5f3ae160;
    case 0x20:
      return &LAB_5f3ae1f0;
    case 0x21:
      return &LAB_5f3ae2d0;
    case 0x30:
      return &LAB_5f3ad760;
    case 0x31:
      return &LAB_5f3ad560;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3aaf20;
    case 0x11:
      return &LAB_5f3aafc0;
    case 0x12:
      return &LAB_5f3ab120;
    case 0x13:
      return &LAB_5f3ab1e0;
    case 0x20:
      return &LAB_5f3ab280;
    case 0x21:
      return &LAB_5f3ab340;
    case 0x30:
      return &LAB_5f3ab060;
    case 0x31:
      return &LAB_5f3aae80;
    case 0x40:
      return &LAB_5f3ab400;
    case 0x41:
      return &LAB_5f3ab500;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5f3ac4b0;
    case 0x11:
      return &LAB_5f3ac5d0;
    case 0x12:
      return FUN_5f3ac780;
    case 0x13:
      return &LAB_5f3ad420;
    case 0x20:
      return &LAB_5f3acf60;
    case 0x21:
      return &LAB_5f3ad4a0;
    case 0x31:
      return FUN_5f3ac540;
    case 0x40:
      return &LAB_5f3ac5f0;
    case 0x41:
      return FUN_5f3ac6d0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5f3ad8d0;
    case 0x11:
      return &LAB_5f3adc60;
    case 0x12:
      return &LAB_5f3addc0;
    case 0x13:
      return &LAB_5f3af4f0;
    case 0x20:
      return &LAB_5f3af480;
    case 0x21:
      return &LAB_5f3af510;
    case 0x31:
      return &LAB_5f3ada00;
    case 0x40:
      return &LAB_5f3adb20;
    case 0x41:
      return &LAB_5f3ae070;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5f3afe10;
    case 0x12:
      return &LAB_5f3afeb0;
    case 0x13:
      return &LAB_5f3afb70;
    case 0x20:
      return &LAB_5f3aff70;
    case 0x21:
      return &LAB_5f3afff0;
    case 0x42:
      return &LAB_5f3afb90;
    }
  }
  return (undefined *)0x0;
}


