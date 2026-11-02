/* Module: oggplug.dll
   Function: FUN_0042cfd0
   Address: 0042cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0042cfd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_004275a0;
    case 0x11:
      return &LAB_00427640;
    case 0x12:
      return &LAB_00427790;
    case 0x13:
      return &LAB_00427850;
    case 0x20:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00451028;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00451028)[uVar1];
    case 0x21:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00451044;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00451044)[uVar1];
    case 0x30:
      return &LAB_004276e0;
    case 0x31:
      return &LAB_00427510;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_00428180;
    case 0x11:
      return &LAB_00428230;
    case 0x12:
      return &LAB_004287d0;
    case 0x13:
      return &LAB_00428980;
    case 0x20:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00451060;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00451060)[uVar1];
    case 0x21:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045107c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045107c)[uVar1];
    case 0x30:
      return &LAB_00428720;
    case 0x31:
      return &LAB_004280e0;
    case 0x40:
      return FUN_004282d0;
    case 0x41:
      return &LAB_00428890;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_0042a330;
    case 0x11:
      return &LAB_0042a400;
    case 0x12:
      return FUN_0042a5b0;
    case 0x13:
      return &LAB_0042a680;
    case 0x20:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00451098;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00451098)[uVar1];
    case 0x21:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_004510b4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_004510b4)[uVar1];
    case 0x30:
      return &LAB_0042a4e0;
    case 0x31:
      return &LAB_0042a270;
    case 0x41:
      return &LAB_00429df0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_0042b530;
    case 0x11:
      return &LAB_0042b5f0;
    case 0x12:
      return &LAB_0042b780;
    case 0x13:
      return &LAB_0042b8a0;
    case 0x20:
      return &LAB_0042bb60;
    case 0x21:
      return &LAB_0042bc30;
    case 0x30:
      return &LAB_0042b6b0;
    case 0x31:
      return &LAB_0042b470;
    case 0x42:
      return FUN_0042b940;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_0042bff0;
    case 0x11:
      uVar1 = FUN_0040c810(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_004510d0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_004510d0)[uVar1];
    case 0x12:
      return &LAB_0042c5f0;
    case 0x13:
      return &LAB_0042c7a0;
    case 0x20:
      return &LAB_0042c8d0;
    case 0x21:
      return &LAB_0042c920;
    case 0x30:
      return &LAB_0042c570;
    case 0x31:
      return &LAB_0042bf60;
    case 0x40:
      return &LAB_0042c4b0;
    case 0x41:
      return &LAB_0042c6d0;
    case 0x42:
      return &LAB_0042c810;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_0042ca10;
    case 0x11:
      return &LAB_0042caa0;
    case 0x12:
      return FUN_0042cc70;
    case 0x13:
      return &LAB_0042ce70;
    case 0x20:
      return &LAB_0042cef0;
    case 0x21:
      return &LAB_0042cf60;
    case 0x30:
      return &LAB_0042cbf0;
    case 0x31:
      return &LAB_0042c980;
    case 0x40:
      return FUN_0042cb30;
    case 0x41:
      return FUN_0042cd60;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_004294f0;
    case 0x11:
      return &LAB_004295a0;
    case 0x12:
      return &LAB_004296d0;
    case 0x13:
      return &LAB_0042a050;
    case 0x20:
      return &LAB_0042a0e0;
    case 0x21:
      return &LAB_0042a1c0;
    case 0x30:
      return &LAB_00429650;
    case 0x31:
      return &LAB_00429450;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_00426e10;
    case 0x11:
      return &LAB_00426eb0;
    case 0x12:
      return &LAB_00427010;
    case 0x13:
      return &LAB_004270d0;
    case 0x20:
      return &LAB_00427170;
    case 0x21:
      return &LAB_00427230;
    case 0x30:
      return &LAB_00426f50;
    case 0x31:
      return &LAB_00426d70;
    case 0x40:
      return &LAB_004272f0;
    case 0x41:
      return &LAB_004273f0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_004283a0;
    case 0x11:
      return &LAB_004284c0;
    case 0x12:
      return FUN_00428670;
    case 0x13:
      return &LAB_00429310;
    case 0x20:
      return &LAB_00428e50;
    case 0x21:
      return &LAB_00429390;
    case 0x31:
      return FUN_00428430;
    case 0x40:
      return &LAB_004284e0;
    case 0x41:
      return FUN_004285c0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_004297c0;
    case 0x11:
      return &LAB_00429b50;
    case 0x12:
      return &LAB_00429cb0;
    case 0x13:
      return &LAB_0042b3e0;
    case 0x20:
      return &LAB_0042b370;
    case 0x21:
      return &LAB_0042b400;
    case 0x31:
      return &LAB_004298f0;
    case 0x40:
      return &LAB_00429a10;
    case 0x41:
      return &LAB_00429f60;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_0042bd00;
    case 0x12:
      return &LAB_0042bda0;
    case 0x13:
      return &LAB_0042ba60;
    case 0x20:
      return &LAB_0042be60;
    case 0x21:
      return &LAB_0042bee0;
    case 0x42:
      return &LAB_0042ba80;
    }
  }
  return (undefined *)0x0;
}


