/* Module: wmfplug2.dll
   Function: FUN_004523e0
   Address: 004523e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_004523e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_0044c9b0;
    case 0x11:
      return &LAB_0044ca50;
    case 0x12:
      return &LAB_0044cba0;
    case 0x13:
      return &LAB_0044cc60;
    case 0x20:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489ad8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489ad8)[uVar1];
    case 0x21:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489af4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489af4)[uVar1];
    case 0x30:
      return &LAB_0044caf0;
    case 0x31:
      return &LAB_0044c920;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_0044d590;
    case 0x11:
      return &LAB_0044d640;
    case 0x12:
      return &LAB_0044dbe0;
    case 0x13:
      return &LAB_0044dd90;
    case 0x20:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489b10;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489b10)[uVar1];
    case 0x21:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489b2c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489b2c)[uVar1];
    case 0x30:
      return &LAB_0044db30;
    case 0x31:
      return &LAB_0044d4f0;
    case 0x40:
      return FUN_0044d6e0;
    case 0x41:
      return &LAB_0044dca0;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_0044f740;
    case 0x11:
      return &LAB_0044f810;
    case 0x12:
      return FUN_0044f9c0;
    case 0x13:
      return &LAB_0044fa90;
    case 0x20:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489b48;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489b48)[uVar1];
    case 0x21:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489b64;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489b64)[uVar1];
    case 0x30:
      return &LAB_0044f8f0;
    case 0x31:
      return &LAB_0044f680;
    case 0x41:
      return &LAB_0044f200;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_00450940;
    case 0x11:
      return &LAB_00450a00;
    case 0x12:
      return &LAB_00450b90;
    case 0x13:
      return &LAB_00450cb0;
    case 0x20:
      return &LAB_00450f70;
    case 0x21:
      return &LAB_00451040;
    case 0x30:
      return &LAB_00450ac0;
    case 0x31:
      return &LAB_00450880;
    case 0x42:
      return FUN_00450d50;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_00451400;
    case 0x11:
      uVar1 = FUN_00421920(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00489b80;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00489b80)[uVar1];
    case 0x12:
      return &LAB_00451a00;
    case 0x13:
      return &LAB_00451bb0;
    case 0x20:
      return &LAB_00451ce0;
    case 0x21:
      return &LAB_00451d30;
    case 0x30:
      return &LAB_00451980;
    case 0x31:
      return &LAB_00451370;
    case 0x40:
      return &LAB_004518c0;
    case 0x41:
      return &LAB_00451ae0;
    case 0x42:
      return &LAB_00451c20;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_00451e20;
    case 0x11:
      return &LAB_00451eb0;
    case 0x12:
      return FUN_00452080;
    case 0x13:
      return &LAB_00452280;
    case 0x20:
      return &LAB_00452300;
    case 0x21:
      return &LAB_00452370;
    case 0x30:
      return &LAB_00452000;
    case 0x31:
      return &LAB_00451d90;
    case 0x40:
      return FUN_00451f40;
    case 0x41:
      return FUN_00452170;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_0044e900;
    case 0x11:
      return &LAB_0044e9b0;
    case 0x12:
      return &LAB_0044eae0;
    case 0x13:
      return &LAB_0044f460;
    case 0x20:
      return &LAB_0044f4f0;
    case 0x21:
      return &LAB_0044f5d0;
    case 0x30:
      return &LAB_0044ea60;
    case 0x31:
      return &LAB_0044e860;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_0044c220;
    case 0x11:
      return &LAB_0044c2c0;
    case 0x12:
      return &LAB_0044c420;
    case 0x13:
      return &LAB_0044c4e0;
    case 0x20:
      return &LAB_0044c580;
    case 0x21:
      return &LAB_0044c640;
    case 0x30:
      return &LAB_0044c360;
    case 0x31:
      return &LAB_0044c180;
    case 0x40:
      return &LAB_0044c700;
    case 0x41:
      return &LAB_0044c800;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_0044d7b0;
    case 0x11:
      return &LAB_0044d8d0;
    case 0x12:
      return FUN_0044da80;
    case 0x13:
      return &LAB_0044e720;
    case 0x20:
      return &LAB_0044e260;
    case 0x21:
      return &LAB_0044e7a0;
    case 0x31:
      return FUN_0044d840;
    case 0x40:
      return &LAB_0044d8f0;
    case 0x41:
      return FUN_0044d9d0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_0044ebd0;
    case 0x11:
      return &LAB_0044ef60;
    case 0x12:
      return &LAB_0044f0c0;
    case 0x13:
      return &LAB_004507f0;
    case 0x20:
      return &LAB_00450780;
    case 0x21:
      return &LAB_00450810;
    case 0x31:
      return &LAB_0044ed00;
    case 0x40:
      return &LAB_0044ee20;
    case 0x41:
      return &LAB_0044f370;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_00451110;
    case 0x12:
      return &LAB_004511b0;
    case 0x13:
      return &LAB_00450e70;
    case 0x20:
      return &LAB_00451270;
    case 0x21:
      return &LAB_004512f0;
    case 0x42:
      return &LAB_00450e90;
    }
  }
  return (undefined *)0x0;
}


