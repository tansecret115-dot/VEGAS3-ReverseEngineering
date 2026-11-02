/* Module: mcplug.dll
   Function: FUN_00443210
   Address: 00443210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00443210(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_0043d7e0;
    case 0x11:
      return &LAB_0043d880;
    case 0x12:
      return &LAB_0043d9d0;
    case 0x13:
      return &LAB_0043da90;
    case 0x20:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00487740;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00487740)[uVar1];
    case 0x21:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0048775c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0048775c)[uVar1];
    case 0x30:
      return &LAB_0043d920;
    case 0x31:
      return &LAB_0043d750;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_0043e3c0;
    case 0x11:
      return &LAB_0043e470;
    case 0x12:
      return &LAB_0043ea10;
    case 0x13:
      return &LAB_0043ebc0;
    case 0x20:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00487778;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00487778)[uVar1];
    case 0x21:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_00487794;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_00487794)[uVar1];
    case 0x30:
      return &LAB_0043e960;
    case 0x31:
      return &LAB_0043e320;
    case 0x40:
      return FUN_0043e510;
    case 0x41:
      return &LAB_0043ead0;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_00440570;
    case 0x11:
      return &LAB_00440640;
    case 0x12:
      return FUN_004407f0;
    case 0x13:
      return &LAB_004408c0;
    case 0x20:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_004877b0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_004877b0)[uVar1];
    case 0x21:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_004877cc;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_004877cc)[uVar1];
    case 0x30:
      return &LAB_00440720;
    case 0x31:
      return &LAB_004404b0;
    case 0x41:
      return &LAB_00440030;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_00441770;
    case 0x11:
      return &LAB_00441830;
    case 0x12:
      return &LAB_004419c0;
    case 0x13:
      return &LAB_00441ae0;
    case 0x20:
      return &LAB_00441da0;
    case 0x21:
      return &LAB_00441e70;
    case 0x30:
      return &LAB_004418f0;
    case 0x31:
      return &LAB_004416b0;
    case 0x42:
      return FUN_00441b80;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_00442230;
    case 0x11:
      uVar1 = FUN_0041ae30(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_004877e8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_004877e8)[uVar1];
    case 0x12:
      return &LAB_00442830;
    case 0x13:
      return &LAB_004429e0;
    case 0x20:
      return &LAB_00442b10;
    case 0x21:
      return &LAB_00442b60;
    case 0x30:
      return &LAB_004427b0;
    case 0x31:
      return &LAB_004421a0;
    case 0x40:
      return &LAB_004426f0;
    case 0x41:
      return &LAB_00442910;
    case 0x42:
      return &LAB_00442a50;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_00442c50;
    case 0x11:
      return &LAB_00442ce0;
    case 0x12:
      return FUN_00442eb0;
    case 0x13:
      return &LAB_004430b0;
    case 0x20:
      return &LAB_00443130;
    case 0x21:
      return &LAB_004431a0;
    case 0x30:
      return &LAB_00442e30;
    case 0x31:
      return &LAB_00442bc0;
    case 0x40:
      return FUN_00442d70;
    case 0x41:
      return FUN_00442fa0;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_0043f730;
    case 0x11:
      return &LAB_0043f7e0;
    case 0x12:
      return &LAB_0043f910;
    case 0x13:
      return &LAB_00440290;
    case 0x20:
      return &LAB_00440320;
    case 0x21:
      return &LAB_00440400;
    case 0x30:
      return &LAB_0043f890;
    case 0x31:
      return &LAB_0043f690;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_0043d050;
    case 0x11:
      return &LAB_0043d0f0;
    case 0x12:
      return &LAB_0043d250;
    case 0x13:
      return &LAB_0043d310;
    case 0x20:
      return &LAB_0043d3b0;
    case 0x21:
      return &LAB_0043d470;
    case 0x30:
      return &LAB_0043d190;
    case 0x31:
      return &LAB_0043cfb0;
    case 0x40:
      return &LAB_0043d530;
    case 0x41:
      return &LAB_0043d630;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_0043e5e0;
    case 0x11:
      return &LAB_0043e700;
    case 0x12:
      return FUN_0043e8b0;
    case 0x13:
      return &LAB_0043f550;
    case 0x20:
      return &LAB_0043f090;
    case 0x21:
      return &LAB_0043f5d0;
    case 0x31:
      return FUN_0043e670;
    case 0x40:
      return &LAB_0043e720;
    case 0x41:
      return FUN_0043e800;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_0043fa00;
    case 0x11:
      return &LAB_0043fd90;
    case 0x12:
      return &LAB_0043fef0;
    case 0x13:
      return &LAB_00441620;
    case 0x20:
      return &LAB_004415b0;
    case 0x21:
      return &LAB_00441640;
    case 0x31:
      return &LAB_0043fb30;
    case 0x40:
      return &LAB_0043fc50;
    case 0x41:
      return &LAB_004401a0;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_00441f40;
    case 0x12:
      return &LAB_00441fe0;
    case 0x13:
      return &LAB_00441ca0;
    case 0x20:
      return &LAB_004420a0;
    case 0x21:
      return &LAB_00442120;
    case 0x42:
      return &LAB_00441cc0;
    }
  }
  return (undefined *)0x0;
}


