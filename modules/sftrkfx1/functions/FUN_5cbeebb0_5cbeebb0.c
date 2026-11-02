/* Module: sftrkfx1.dll
   Function: FUN_5cbeebb0
   Address: 5cbeebb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5cbeebb0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbe9180;
    case 0x11:
      return &LAB_5cbe9220;
    case 0x12:
      return &LAB_5cbe9370;
    case 0x13:
      return &LAB_5cbe9430;
    case 0x20:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc112e0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc112e0)[uVar1];
    case 0x21:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc112fc;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc112fc)[uVar1];
    case 0x30:
      return &LAB_5cbe92c0;
    case 0x31:
      return &LAB_5cbe90f0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbe9d60;
    case 0x11:
      return &LAB_5cbe9e10;
    case 0x12:
      return &LAB_5cbea3b0;
    case 0x13:
      return &LAB_5cbea560;
    case 0x20:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc11318;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc11318)[uVar1];
    case 0x21:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc11334;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc11334)[uVar1];
    case 0x30:
      return &LAB_5cbea300;
    case 0x31:
      return &LAB_5cbe9cc0;
    case 0x40:
      return FUN_5cbe9eb0;
    case 0x41:
      return &LAB_5cbea470;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbebf10;
    case 0x11:
      return &LAB_5cbebfe0;
    case 0x12:
      return FUN_5cbec190;
    case 0x13:
      return &LAB_5cbec260;
    case 0x20:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc11350;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc11350)[uVar1];
    case 0x21:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc1136c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc1136c)[uVar1];
    case 0x30:
      return &LAB_5cbec0c0;
    case 0x31:
      return &LAB_5cbebe50;
    case 0x41:
      return &LAB_5cbeb9d0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbed110;
    case 0x11:
      return &LAB_5cbed1d0;
    case 0x12:
      return &LAB_5cbed360;
    case 0x13:
      return &LAB_5cbed480;
    case 0x20:
      return &LAB_5cbed740;
    case 0x21:
      return &LAB_5cbed810;
    case 0x30:
      return &LAB_5cbed290;
    case 0x31:
      return &LAB_5cbed050;
    case 0x42:
      return FUN_5cbed520;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbedbd0;
    case 0x11:
      uVar1 = FUN_5cbc15d0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5cc11388;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5cc11388)[uVar1];
    case 0x12:
      return &LAB_5cbee1d0;
    case 0x13:
      return &LAB_5cbee380;
    case 0x20:
      return &LAB_5cbee4b0;
    case 0x21:
      return &LAB_5cbee500;
    case 0x30:
      return &LAB_5cbee150;
    case 0x31:
      return &LAB_5cbedb40;
    case 0x40:
      return &LAB_5cbee090;
    case 0x41:
      return &LAB_5cbee2b0;
    case 0x42:
      return &LAB_5cbee3f0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbee5f0;
    case 0x11:
      return &LAB_5cbee680;
    case 0x12:
      return FUN_5cbee850;
    case 0x13:
      return &LAB_5cbeea50;
    case 0x20:
      return &LAB_5cbeead0;
    case 0x21:
      return &LAB_5cbeeb40;
    case 0x30:
      return &LAB_5cbee7d0;
    case 0x31:
      return &LAB_5cbee560;
    case 0x40:
      return FUN_5cbee710;
    case 0x41:
      return FUN_5cbee940;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbeb0d0;
    case 0x11:
      return &LAB_5cbeb180;
    case 0x12:
      return &LAB_5cbeb2b0;
    case 0x13:
      return &LAB_5cbebc30;
    case 0x20:
      return &LAB_5cbebcc0;
    case 0x21:
      return &LAB_5cbebda0;
    case 0x30:
      return &LAB_5cbeb230;
    case 0x31:
      return &LAB_5cbeb030;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbe89f0;
    case 0x11:
      return &LAB_5cbe8a90;
    case 0x12:
      return &LAB_5cbe8bf0;
    case 0x13:
      return &LAB_5cbe8cb0;
    case 0x20:
      return &LAB_5cbe8d50;
    case 0x21:
      return &LAB_5cbe8e10;
    case 0x30:
      return &LAB_5cbe8b30;
    case 0x31:
      return &LAB_5cbe8950;
    case 0x40:
      return &LAB_5cbe8ed0;
    case 0x41:
      return &LAB_5cbe8fd0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5cbe9f80;
    case 0x11:
      return &LAB_5cbea0a0;
    case 0x12:
      return FUN_5cbea250;
    case 0x13:
      return &LAB_5cbeaef0;
    case 0x20:
      return &LAB_5cbeaa30;
    case 0x21:
      return &LAB_5cbeaf70;
    case 0x31:
      return FUN_5cbea010;
    case 0x40:
      return &LAB_5cbea0c0;
    case 0x41:
      return FUN_5cbea1a0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5cbeb3a0;
    case 0x11:
      return &LAB_5cbeb730;
    case 0x12:
      return &LAB_5cbeb890;
    case 0x13:
      return &LAB_5cbecfc0;
    case 0x20:
      return &LAB_5cbecf50;
    case 0x21:
      return &LAB_5cbecfe0;
    case 0x31:
      return &LAB_5cbeb4d0;
    case 0x40:
      return &LAB_5cbeb5f0;
    case 0x41:
      return &LAB_5cbebb40;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5cbed8e0;
    case 0x12:
      return &LAB_5cbed980;
    case 0x13:
      return &LAB_5cbed640;
    case 0x20:
      return &LAB_5cbeda40;
    case 0x21:
      return &LAB_5cbedac0;
    case 0x42:
      return &LAB_5cbed660;
    }
  }
  return (undefined *)0x0;
}


