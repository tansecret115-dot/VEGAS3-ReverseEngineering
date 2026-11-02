/* Module: sfpaplug.dll
   Function: FUN_004243a0
   Address: 004243a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_004243a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_0041e970;
    case 0x11:
      return &LAB_0041ea10;
    case 0x12:
      return &LAB_0041eb60;
    case 0x13:
      return &LAB_0041ec20;
    case 0x20:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b710;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b710)[uVar1];
    case 0x21:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b72c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b72c)[uVar1];
    case 0x30:
      return &LAB_0041eab0;
    case 0x31:
      return &LAB_0041e8e0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_0041f550;
    case 0x11:
      return &LAB_0041f600;
    case 0x12:
      return &LAB_0041fba0;
    case 0x13:
      return &LAB_0041fd50;
    case 0x20:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b748;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b748)[uVar1];
    case 0x21:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b764;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b764)[uVar1];
    case 0x30:
      return &LAB_0041faf0;
    case 0x31:
      return &LAB_0041f4b0;
    case 0x40:
      return FUN_0041f6a0;
    case 0x41:
      return &LAB_0041fc60;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_00421700;
    case 0x11:
      return &LAB_004217d0;
    case 0x12:
      return FUN_00421980;
    case 0x13:
      return &LAB_00421a50;
    case 0x20:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b780;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b780)[uVar1];
    case 0x21:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b79c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b79c)[uVar1];
    case 0x30:
      return &LAB_004218b0;
    case 0x31:
      return &LAB_00421640;
    case 0x41:
      return &LAB_004211c0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_00422900;
    case 0x11:
      return &LAB_004229c0;
    case 0x12:
      return &LAB_00422b50;
    case 0x13:
      return &LAB_00422c70;
    case 0x20:
      return &LAB_00422f30;
    case 0x21:
      return &LAB_00423000;
    case 0x30:
      return &LAB_00422a80;
    case 0x31:
      return &LAB_00422840;
    case 0x42:
      return FUN_00422d10;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_004233c0;
    case 0x11:
      uVar1 = FUN_00417b80(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_0045b7b8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_0045b7b8)[uVar1];
    case 0x12:
      return &LAB_004239c0;
    case 0x13:
      return &LAB_00423b70;
    case 0x20:
      return &LAB_00423ca0;
    case 0x21:
      return &LAB_00423cf0;
    case 0x30:
      return &LAB_00423940;
    case 0x31:
      return &LAB_00423330;
    case 0x40:
      return &LAB_00423880;
    case 0x41:
      return &LAB_00423aa0;
    case 0x42:
      return &LAB_00423be0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_00423de0;
    case 0x11:
      return &LAB_00423e70;
    case 0x12:
      return FUN_00424040;
    case 0x13:
      return &LAB_00424240;
    case 0x20:
      return &LAB_004242c0;
    case 0x21:
      return &LAB_00424330;
    case 0x30:
      return &LAB_00423fc0;
    case 0x31:
      return &LAB_00423d50;
    case 0x40:
      return FUN_00423f00;
    case 0x41:
      return FUN_00424130;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_004208c0;
    case 0x11:
      return &LAB_00420970;
    case 0x12:
      return &LAB_00420aa0;
    case 0x13:
      return &LAB_00421420;
    case 0x20:
      return &LAB_004214b0;
    case 0x21:
      return &LAB_00421590;
    case 0x30:
      return &LAB_00420a20;
    case 0x31:
      return &LAB_00420820;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_0041e1e0;
    case 0x11:
      return &LAB_0041e280;
    case 0x12:
      return &LAB_0041e3e0;
    case 0x13:
      return &LAB_0041e4a0;
    case 0x20:
      return &LAB_0041e540;
    case 0x21:
      return &LAB_0041e600;
    case 0x30:
      return &LAB_0041e320;
    case 0x31:
      return &LAB_0041e140;
    case 0x40:
      return &LAB_0041e6c0;
    case 0x41:
      return &LAB_0041e7c0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_0041f770;
    case 0x11:
      return &LAB_0041f890;
    case 0x12:
      return FUN_0041fa40;
    case 0x13:
      return &LAB_004206e0;
    case 0x20:
      return &LAB_00420220;
    case 0x21:
      return &LAB_00420760;
    case 0x31:
      return FUN_0041f800;
    case 0x40:
      return &LAB_0041f8b0;
    case 0x41:
      return FUN_0041f990;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_00420b90;
    case 0x11:
      return &LAB_00420f20;
    case 0x12:
      return &LAB_00421080;
    case 0x13:
      return &LAB_004227b0;
    case 0x20:
      return &LAB_00422740;
    case 0x21:
      return &LAB_004227d0;
    case 0x31:
      return &LAB_00420cc0;
    case 0x40:
      return &LAB_00420de0;
    case 0x41:
      return &LAB_00421330;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_004230d0;
    case 0x12:
      return &LAB_00423170;
    case 0x13:
      return &LAB_00422e30;
    case 0x20:
      return &LAB_00423230;
    case 0x21:
      return &LAB_004232b0;
    case 0x42:
      return &LAB_00422e50;
    }
  }
  return (undefined *)0x0;
}


