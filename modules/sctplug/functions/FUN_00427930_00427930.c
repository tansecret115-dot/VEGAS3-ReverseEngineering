/* Module: sctplug.dll
   Function: FUN_00427930
   Address: 00427930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00427930(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_00421f00;
    case 0x11:
      return &LAB_00421fa0;
    case 0x12:
      return &LAB_004220f0;
    case 0x13:
      return &LAB_004221b0;
    case 0x20:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c690;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c690)[uVar1];
    case 0x21:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c6ac;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c6ac)[uVar1];
    case 0x30:
      return &LAB_00422040;
    case 0x31:
      return &LAB_00421e70;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_00422ae0;
    case 0x11:
      return &LAB_00422b90;
    case 0x12:
      return &LAB_00423130;
    case 0x13:
      return &LAB_004232e0;
    case 0x20:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c6c8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c6c8)[uVar1];
    case 0x21:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c6e4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c6e4)[uVar1];
    case 0x30:
      return &LAB_00423080;
    case 0x31:
      return &LAB_00422a40;
    case 0x40:
      return FUN_00422c30;
    case 0x41:
      return &LAB_004231f0;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_00424c90;
    case 0x11:
      return &LAB_00424d60;
    case 0x12:
      return FUN_00424f10;
    case 0x13:
      return &LAB_00424fe0;
    case 0x20:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c700;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c700)[uVar1];
    case 0x21:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c71c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c71c)[uVar1];
    case 0x30:
      return &LAB_00424e40;
    case 0x31:
      return &LAB_00424bd0;
    case 0x41:
      return &LAB_00424750;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_00425e90;
    case 0x11:
      return &LAB_00425f50;
    case 0x12:
      return &LAB_004260e0;
    case 0x13:
      return &LAB_00426200;
    case 0x20:
      return &LAB_004264c0;
    case 0x21:
      return &LAB_00426590;
    case 0x30:
      return &LAB_00426010;
    case 0x31:
      return &LAB_00425dd0;
    case 0x42:
      return FUN_004262a0;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_00426950;
    case 0x11:
      uVar1 = FUN_0040eac0(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0043c738;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0043c738)[uVar1];
    case 0x12:
      return &LAB_00426f50;
    case 0x13:
      return &LAB_00427100;
    case 0x20:
      return &LAB_00427230;
    case 0x21:
      return &LAB_00427280;
    case 0x30:
      return &LAB_00426ed0;
    case 0x31:
      return &LAB_004268c0;
    case 0x40:
      return &LAB_00426e10;
    case 0x41:
      return &LAB_00427030;
    case 0x42:
      return &LAB_00427170;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_00427370;
    case 0x11:
      return &LAB_00427400;
    case 0x12:
      return FUN_004275d0;
    case 0x13:
      return &LAB_004277d0;
    case 0x20:
      return &LAB_00427850;
    case 0x21:
      return &LAB_004278c0;
    case 0x30:
      return &LAB_00427550;
    case 0x31:
      return &LAB_004272e0;
    case 0x40:
      return FUN_00427490;
    case 0x41:
      return FUN_004276c0;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_00423e50;
    case 0x11:
      return &LAB_00423f00;
    case 0x12:
      return &LAB_00424030;
    case 0x13:
      return &LAB_004249b0;
    case 0x20:
      return &LAB_00424a40;
    case 0x21:
      return &LAB_00424b20;
    case 0x30:
      return &LAB_00423fb0;
    case 0x31:
      return &LAB_00423db0;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_00421770;
    case 0x11:
      return &LAB_00421810;
    case 0x12:
      return &LAB_00421970;
    case 0x13:
      return &LAB_00421a30;
    case 0x20:
      return &LAB_00421ad0;
    case 0x21:
      return &LAB_00421b90;
    case 0x30:
      return &LAB_004218b0;
    case 0x31:
      return &LAB_004216d0;
    case 0x40:
      return &LAB_00421c50;
    case 0x41:
      return &LAB_00421d50;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_00422d00;
    case 0x11:
      return &LAB_00422e20;
    case 0x12:
      return FUN_00422fd0;
    case 0x13:
      return &LAB_00423c70;
    case 0x20:
      return &LAB_004237b0;
    case 0x21:
      return &LAB_00423cf0;
    case 0x31:
      return FUN_00422d90;
    case 0x40:
      return &LAB_00422e40;
    case 0x41:
      return FUN_00422f20;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_00424120;
    case 0x11:
      return &LAB_004244b0;
    case 0x12:
      return &LAB_00424610;
    case 0x13:
      return &LAB_00425d40;
    case 0x20:
      return &LAB_00425cd0;
    case 0x21:
      return &LAB_00425d60;
    case 0x31:
      return &LAB_00424250;
    case 0x40:
      return &LAB_00424370;
    case 0x41:
      return &LAB_004248c0;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_00426660;
    case 0x12:
      return &LAB_00426700;
    case 0x13:
      return &LAB_004263c0;
    case 0x20:
      return &LAB_004267c0;
    case 0x21:
      return &LAB_00426840;
    case 0x42:
      return &LAB_004263e0;
    }
  }
  return (undefined *)0x0;
}


