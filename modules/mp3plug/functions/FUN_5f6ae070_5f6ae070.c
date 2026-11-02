/* Module: mp3plug.dll
   Function: FUN_5f6ae070
   Address: 5f6ae070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f6ae070(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6a8640;
    case 0x11:
      return &LAB_5f6a86e0;
    case 0x12:
      return &LAB_5f6a8830;
    case 0x13:
      return &LAB_5f6a88f0;
    case 0x20:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73dd98;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73dd98)[uVar1];
    case 0x21:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73ddb4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73ddb4)[uVar1];
    case 0x30:
      return &LAB_5f6a8780;
    case 0x31:
      return &LAB_5f6a85b0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6a9220;
    case 0x11:
      return &LAB_5f6a92d0;
    case 0x12:
      return &LAB_5f6a9870;
    case 0x13:
      return &LAB_5f6a9a20;
    case 0x20:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73ddd0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73ddd0)[uVar1];
    case 0x21:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73ddec;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73ddec)[uVar1];
    case 0x30:
      return &LAB_5f6a97c0;
    case 0x31:
      return &LAB_5f6a9180;
    case 0x40:
      return FUN_5f6a9370;
    case 0x41:
      return &LAB_5f6a9930;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6ab3d0;
    case 0x11:
      return &LAB_5f6ab4a0;
    case 0x12:
      return FUN_5f6ab650;
    case 0x13:
      return &LAB_5f6ab720;
    case 0x20:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73de08;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73de08)[uVar1];
    case 0x21:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73de24;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73de24)[uVar1];
    case 0x30:
      return &LAB_5f6ab580;
    case 0x31:
      return &LAB_5f6ab310;
    case 0x41:
      return &LAB_5f6aae90;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6ac5d0;
    case 0x11:
      return &LAB_5f6ac690;
    case 0x12:
      return &LAB_5f6ac820;
    case 0x13:
      return &LAB_5f6ac940;
    case 0x20:
      return &LAB_5f6acc00;
    case 0x21:
      return &LAB_5f6accd0;
    case 0x30:
      return &LAB_5f6ac750;
    case 0x31:
      return &LAB_5f6ac510;
    case 0x42:
      return FUN_5f6ac9e0;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6ad090;
    case 0x11:
      uVar1 = FUN_5f69fc10(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f73de40;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f73de40)[uVar1];
    case 0x12:
      return &LAB_5f6ad690;
    case 0x13:
      return &LAB_5f6ad840;
    case 0x20:
      return &LAB_5f6ad970;
    case 0x21:
      return &LAB_5f6ad9c0;
    case 0x30:
      return &LAB_5f6ad610;
    case 0x31:
      return &LAB_5f6ad000;
    case 0x40:
      return &LAB_5f6ad550;
    case 0x41:
      return &LAB_5f6ad770;
    case 0x42:
      return &LAB_5f6ad8b0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6adab0;
    case 0x11:
      return &LAB_5f6adb40;
    case 0x12:
      return FUN_5f6add10;
    case 0x13:
      return &LAB_5f6adf10;
    case 0x20:
      return &LAB_5f6adf90;
    case 0x21:
      return &LAB_5f6ae000;
    case 0x30:
      return &LAB_5f6adc90;
    case 0x31:
      return &LAB_5f6ada20;
    case 0x40:
      return FUN_5f6adbd0;
    case 0x41:
      return FUN_5f6ade00;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6aa590;
    case 0x11:
      return &LAB_5f6aa640;
    case 0x12:
      return &LAB_5f6aa770;
    case 0x13:
      return &LAB_5f6ab0f0;
    case 0x20:
      return &LAB_5f6ab180;
    case 0x21:
      return &LAB_5f6ab260;
    case 0x30:
      return &LAB_5f6aa6f0;
    case 0x31:
      return &LAB_5f6aa4f0;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6a7eb0;
    case 0x11:
      return &LAB_5f6a7f50;
    case 0x12:
      return &LAB_5f6a80b0;
    case 0x13:
      return &LAB_5f6a8170;
    case 0x20:
      return &LAB_5f6a8210;
    case 0x21:
      return &LAB_5f6a82d0;
    case 0x30:
      return &LAB_5f6a7ff0;
    case 0x31:
      return &LAB_5f6a7e10;
    case 0x40:
      return &LAB_5f6a8390;
    case 0x41:
      return &LAB_5f6a8490;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5f6a9440;
    case 0x11:
      return &LAB_5f6a9560;
    case 0x12:
      return FUN_5f6a9710;
    case 0x13:
      return &LAB_5f6aa3b0;
    case 0x20:
      return &LAB_5f6a9ef0;
    case 0x21:
      return &LAB_5f6aa430;
    case 0x31:
      return FUN_5f6a94d0;
    case 0x40:
      return &LAB_5f6a9580;
    case 0x41:
      return FUN_5f6a9660;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5f6aa860;
    case 0x11:
      return &LAB_5f6aabf0;
    case 0x12:
      return &LAB_5f6aad50;
    case 0x13:
      return &LAB_5f6ac480;
    case 0x20:
      return &LAB_5f6ac410;
    case 0x21:
      return &LAB_5f6ac4a0;
    case 0x31:
      return &LAB_5f6aa990;
    case 0x40:
      return &LAB_5f6aaab0;
    case 0x41:
      return &LAB_5f6ab000;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5f6acda0;
    case 0x12:
      return &LAB_5f6ace40;
    case 0x13:
      return &LAB_5f6acb00;
    case 0x20:
      return &LAB_5f6acf00;
    case 0x21:
      return &LAB_5f6acf80;
    case 0x42:
      return &LAB_5f6acb20;
    }
  }
  return (undefined *)0x0;
}


