/* Module: aifplug.dll
   Function: FUN_5fbf0680
   Address: 5fbf0680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5fbf0680(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbeac50;
    case 0x11:
      return &LAB_5fbeacf0;
    case 0x12:
      return &LAB_5fbeae40;
    case 0x13:
      return &LAB_5fbeaf00;
    case 0x20:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc09268;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc09268)[uVar1];
    case 0x21:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc09284;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc09284)[uVar1];
    case 0x30:
      return &LAB_5fbead90;
    case 0x31:
      return &LAB_5fbeabc0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbeb830;
    case 0x11:
      return &LAB_5fbeb8e0;
    case 0x12:
      return &LAB_5fbebe80;
    case 0x13:
      return &LAB_5fbec030;
    case 0x20:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc092a0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc092a0)[uVar1];
    case 0x21:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc092bc;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc092bc)[uVar1];
    case 0x30:
      return &LAB_5fbebdd0;
    case 0x31:
      return &LAB_5fbeb790;
    case 0x40:
      return FUN_5fbeb980;
    case 0x41:
      return &LAB_5fbebf40;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbed9e0;
    case 0x11:
      return &LAB_5fbedab0;
    case 0x12:
      return FUN_5fbedc60;
    case 0x13:
      return &LAB_5fbedd30;
    case 0x20:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc092d8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc092d8)[uVar1];
    case 0x21:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc092f4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc092f4)[uVar1];
    case 0x30:
      return &LAB_5fbedb90;
    case 0x31:
      return &LAB_5fbed920;
    case 0x41:
      return &LAB_5fbed4a0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbeebe0;
    case 0x11:
      return &LAB_5fbeeca0;
    case 0x12:
      return &LAB_5fbeee30;
    case 0x13:
      return &LAB_5fbeef50;
    case 0x20:
      return &LAB_5fbef210;
    case 0x21:
      return &LAB_5fbef2e0;
    case 0x30:
      return &LAB_5fbeed60;
    case 0x31:
      return &LAB_5fbeeb20;
    case 0x42:
      return FUN_5fbeeff0;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbef6a0;
    case 0x11:
      uVar1 = FUN_5fbdb510(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5fc09310;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5fc09310)[uVar1];
    case 0x12:
      return &LAB_5fbefca0;
    case 0x13:
      return &LAB_5fbefe50;
    case 0x20:
      return &LAB_5fbeff80;
    case 0x21:
      return &LAB_5fbeffd0;
    case 0x30:
      return &LAB_5fbefc20;
    case 0x31:
      return &LAB_5fbef610;
    case 0x40:
      return &LAB_5fbefb60;
    case 0x41:
      return &LAB_5fbefd80;
    case 0x42:
      return &LAB_5fbefec0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbf00c0;
    case 0x11:
      return &LAB_5fbf0150;
    case 0x12:
      return FUN_5fbf0320;
    case 0x13:
      return &LAB_5fbf0520;
    case 0x20:
      return &LAB_5fbf05a0;
    case 0x21:
      return &LAB_5fbf0610;
    case 0x30:
      return &LAB_5fbf02a0;
    case 0x31:
      return &LAB_5fbf0030;
    case 0x40:
      return FUN_5fbf01e0;
    case 0x41:
      return FUN_5fbf0410;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbecba0;
    case 0x11:
      return &LAB_5fbecc50;
    case 0x12:
      return &LAB_5fbecd80;
    case 0x13:
      return &LAB_5fbed700;
    case 0x20:
      return &LAB_5fbed790;
    case 0x21:
      return &LAB_5fbed870;
    case 0x30:
      return &LAB_5fbecd00;
    case 0x31:
      return &LAB_5fbecb00;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbea4c0;
    case 0x11:
      return &LAB_5fbea560;
    case 0x12:
      return &LAB_5fbea6c0;
    case 0x13:
      return &LAB_5fbea780;
    case 0x20:
      return &LAB_5fbea820;
    case 0x21:
      return &LAB_5fbea8e0;
    case 0x30:
      return &LAB_5fbea600;
    case 0x31:
      return &LAB_5fbea420;
    case 0x40:
      return &LAB_5fbea9a0;
    case 0x41:
      return &LAB_5fbeaaa0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5fbeba50;
    case 0x11:
      return &LAB_5fbebb70;
    case 0x12:
      return FUN_5fbebd20;
    case 0x13:
      return &LAB_5fbec9c0;
    case 0x20:
      return &LAB_5fbec500;
    case 0x21:
      return &LAB_5fbeca40;
    case 0x31:
      return FUN_5fbebae0;
    case 0x40:
      return &LAB_5fbebb90;
    case 0x41:
      return FUN_5fbebc70;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5fbece70;
    case 0x11:
      return &LAB_5fbed200;
    case 0x12:
      return &LAB_5fbed360;
    case 0x13:
      return &LAB_5fbeea90;
    case 0x20:
      return &LAB_5fbeea20;
    case 0x21:
      return &LAB_5fbeeab0;
    case 0x31:
      return &LAB_5fbecfa0;
    case 0x40:
      return &LAB_5fbed0c0;
    case 0x41:
      return &LAB_5fbed610;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5fbef3b0;
    case 0x12:
      return &LAB_5fbef450;
    case 0x13:
      return &LAB_5fbef110;
    case 0x20:
      return &LAB_5fbef510;
    case 0x21:
      return &LAB_5fbef590;
    case 0x42:
      return &LAB_5fbef130;
    }
  }
  return (undefined *)0x0;
}


