/* Module: aviplug.dll
   Function: FUN_5f9ce770
   Address: 5f9ce770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f9ce770(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9c8d40;
    case 0x11:
      return &LAB_5f9c8de0;
    case 0x12:
      return &LAB_5f9c8f30;
    case 0x13:
      return &LAB_5f9c8ff0;
    case 0x20:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3e40;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3e40)[uVar1];
    case 0x21:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3e5c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3e5c)[uVar1];
    case 0x30:
      return &LAB_5f9c8e80;
    case 0x31:
      return &LAB_5f9c8cb0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9c9920;
    case 0x11:
      return &LAB_5f9c99d0;
    case 0x12:
      return &LAB_5f9c9f70;
    case 0x13:
      return &LAB_5f9ca120;
    case 0x20:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3e78;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3e78)[uVar1];
    case 0x21:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3e94;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3e94)[uVar1];
    case 0x30:
      return &LAB_5f9c9ec0;
    case 0x31:
      return &LAB_5f9c9880;
    case 0x40:
      return FUN_5f9c9a70;
    case 0x41:
      return &LAB_5f9ca030;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9cbad0;
    case 0x11:
      return &LAB_5f9cbba0;
    case 0x12:
      return FUN_5f9cbd50;
    case 0x13:
      return &LAB_5f9cbe20;
    case 0x20:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3eb0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3eb0)[uVar1];
    case 0x21:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3ecc;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3ecc)[uVar1];
    case 0x30:
      return &LAB_5f9cbc80;
    case 0x31:
      return &LAB_5f9cba10;
    case 0x41:
      return &LAB_5f9cb590;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9cccd0;
    case 0x11:
      return &LAB_5f9ccd90;
    case 0x12:
      return &LAB_5f9ccf20;
    case 0x13:
      return &LAB_5f9cd040;
    case 0x20:
      return &LAB_5f9cd300;
    case 0x21:
      return &LAB_5f9cd3d0;
    case 0x30:
      return &LAB_5f9cce50;
    case 0x31:
      return &LAB_5f9ccc10;
    case 0x42:
      return FUN_5f9cd0e0;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9cd790;
    case 0x11:
      uVar1 = FUN_5f982b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f9f3ee8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f9f3ee8)[uVar1];
    case 0x12:
      return &LAB_5f9cdd90;
    case 0x13:
      return &LAB_5f9cdf40;
    case 0x20:
      return &LAB_5f9ce070;
    case 0x21:
      return &LAB_5f9ce0c0;
    case 0x30:
      return &LAB_5f9cdd10;
    case 0x31:
      return &LAB_5f9cd700;
    case 0x40:
      return &LAB_5f9cdc50;
    case 0x41:
      return &LAB_5f9cde70;
    case 0x42:
      return &LAB_5f9cdfb0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9ce1b0;
    case 0x11:
      return &LAB_5f9ce240;
    case 0x12:
      return FUN_5f9ce410;
    case 0x13:
      return &LAB_5f9ce610;
    case 0x20:
      return &LAB_5f9ce690;
    case 0x21:
      return &LAB_5f9ce700;
    case 0x30:
      return &LAB_5f9ce390;
    case 0x31:
      return &LAB_5f9ce120;
    case 0x40:
      return FUN_5f9ce2d0;
    case 0x41:
      return FUN_5f9ce500;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9cac90;
    case 0x11:
      return &LAB_5f9cad40;
    case 0x12:
      return &LAB_5f9cae70;
    case 0x13:
      return &LAB_5f9cb7f0;
    case 0x20:
      return &LAB_5f9cb880;
    case 0x21:
      return &LAB_5f9cb960;
    case 0x30:
      return &LAB_5f9cadf0;
    case 0x31:
      return &LAB_5f9cabf0;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9c85b0;
    case 0x11:
      return &LAB_5f9c8650;
    case 0x12:
      return &LAB_5f9c87b0;
    case 0x13:
      return &LAB_5f9c8870;
    case 0x20:
      return &LAB_5f9c8910;
    case 0x21:
      return &LAB_5f9c89d0;
    case 0x30:
      return &LAB_5f9c86f0;
    case 0x31:
      return &LAB_5f9c8510;
    case 0x40:
      return &LAB_5f9c8a90;
    case 0x41:
      return &LAB_5f9c8b90;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5f9c9b40;
    case 0x11:
      return &LAB_5f9c9c60;
    case 0x12:
      return FUN_5f9c9e10;
    case 0x13:
      return &LAB_5f9caab0;
    case 0x20:
      return &LAB_5f9ca5f0;
    case 0x21:
      return &LAB_5f9cab30;
    case 0x31:
      return FUN_5f9c9bd0;
    case 0x40:
      return &LAB_5f9c9c80;
    case 0x41:
      return FUN_5f9c9d60;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5f9caf60;
    case 0x11:
      return &LAB_5f9cb2f0;
    case 0x12:
      return &LAB_5f9cb450;
    case 0x13:
      return &LAB_5f9ccb80;
    case 0x20:
      return &LAB_5f9ccb10;
    case 0x21:
      return &LAB_5f9ccba0;
    case 0x31:
      return &LAB_5f9cb090;
    case 0x40:
      return &LAB_5f9cb1b0;
    case 0x41:
      return &LAB_5f9cb700;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5f9cd4a0;
    case 0x12:
      return &LAB_5f9cd540;
    case 0x13:
      return &LAB_5f9cd200;
    case 0x20:
      return &LAB_5f9cd600;
    case 0x21:
      return &LAB_5f9cd680;
    case 0x42:
      return &LAB_5f9cd220;
    }
  }
  return (undefined *)0x0;
}


