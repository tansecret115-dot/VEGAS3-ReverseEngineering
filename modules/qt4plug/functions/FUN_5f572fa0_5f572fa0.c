/* Module: qt4plug.dll
   Function: FUN_5f572fa0
   Address: 5f572fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f572fa0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return &LAB_5f56d570;
    case 0x11:
      return &LAB_5f56d610;
    case 0x12:
      return &LAB_5f56d760;
    case 0x13:
      return &LAB_5f56d820;
    case 0x20:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d08;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d08)[uVar1];
    case 0x21:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d24;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d24)[uVar1];
    case 0x30:
      return &LAB_5f56d6b0;
    case 0x31:
      return &LAB_5f56d4e0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return &LAB_5f56e150;
    case 0x11:
      return &LAB_5f56e200;
    case 0x12:
      return &LAB_5f56e7a0;
    case 0x13:
      return &LAB_5f56e950;
    case 0x20:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d40;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d40)[uVar1];
    case 0x21:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d5c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d5c)[uVar1];
    case 0x30:
      return &LAB_5f56e6f0;
    case 0x31:
      return &LAB_5f56e0b0;
    case 0x40:
      return FUN_5f56e2a0;
    case 0x41:
      return &LAB_5f56e860;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return &LAB_5f570300;
    case 0x11:
      return &LAB_5f5703d0;
    case 0x12:
      return FUN_5f570580;
    case 0x13:
      return &LAB_5f570650;
    case 0x20:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d78;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d78)[uVar1];
    case 0x21:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3d94;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3d94)[uVar1];
    case 0x30:
      return &LAB_5f5704b0;
    case 0x31:
      return &LAB_5f570240;
    case 0x41:
      return &LAB_5f56fdc0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return &LAB_5f571500;
    case 0x11:
      return &LAB_5f5715c0;
    case 0x12:
      return &LAB_5f571750;
    case 0x13:
      return &LAB_5f571870;
    case 0x20:
      return &LAB_5f571b30;
    case 0x21:
      return &LAB_5f571c00;
    case 0x30:
      return &LAB_5f571680;
    case 0x31:
      return &LAB_5f571440;
    case 0x42:
      return FUN_5f571910;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return &LAB_5f571fc0;
    case 0x11:
      uVar1 = FUN_5f529450(0xf);
      if ((int)uVar1 < 0) {
        return PTR_LAB_5f5a3db0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (&PTR_LAB_5f5a3db0)[uVar1];
    case 0x12:
      return &LAB_5f5725c0;
    case 0x13:
      return &LAB_5f572770;
    case 0x20:
      return &LAB_5f5728a0;
    case 0x21:
      return &LAB_5f5728f0;
    case 0x30:
      return &LAB_5f572540;
    case 0x31:
      return &LAB_5f571f30;
    case 0x40:
      return &LAB_5f572480;
    case 0x41:
      return &LAB_5f5726a0;
    case 0x42:
      return &LAB_5f5727e0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return &LAB_5f5729e0;
    case 0x11:
      return &LAB_5f572a70;
    case 0x12:
      return FUN_5f572c40;
    case 0x13:
      return &LAB_5f572e40;
    case 0x20:
      return &LAB_5f572ec0;
    case 0x21:
      return &LAB_5f572f30;
    case 0x30:
      return &LAB_5f572bc0;
    case 0x31:
      return &LAB_5f572950;
    case 0x40:
      return FUN_5f572b00;
    case 0x41:
      return FUN_5f572d30;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return &LAB_5f56f4c0;
    case 0x11:
      return &LAB_5f56f570;
    case 0x12:
      return &LAB_5f56f6a0;
    case 0x13:
      return &LAB_5f570020;
    case 0x20:
      return &LAB_5f5700b0;
    case 0x21:
      return &LAB_5f570190;
    case 0x30:
      return &LAB_5f56f620;
    case 0x31:
      return &LAB_5f56f420;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return &LAB_5f56cde0;
    case 0x11:
      return &LAB_5f56ce80;
    case 0x12:
      return &LAB_5f56cfe0;
    case 0x13:
      return &LAB_5f56d0a0;
    case 0x20:
      return &LAB_5f56d140;
    case 0x21:
      return &LAB_5f56d200;
    case 0x30:
      return &LAB_5f56cf20;
    case 0x31:
      return &LAB_5f56cd40;
    case 0x40:
      return &LAB_5f56d2c0;
    case 0x41:
      return &LAB_5f56d3c0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_5f56e370;
    case 0x11:
      return &LAB_5f56e490;
    case 0x12:
      return FUN_5f56e640;
    case 0x13:
      return &LAB_5f56f2e0;
    case 0x20:
      return &LAB_5f56ee20;
    case 0x21:
      return &LAB_5f56f360;
    case 0x31:
      return FUN_5f56e400;
    case 0x40:
      return &LAB_5f56e4b0;
    case 0x41:
      return FUN_5f56e590;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return &LAB_5f56f790;
    case 0x11:
      return &LAB_5f56fb20;
    case 0x12:
      return &LAB_5f56fc80;
    case 0x13:
      return &LAB_5f5713b0;
    case 0x20:
      return &LAB_5f571340;
    case 0x21:
      return &LAB_5f5713d0;
    case 0x31:
      return &LAB_5f56f8c0;
    case 0x40:
      return &LAB_5f56f9e0;
    case 0x41:
      return &LAB_5f56ff30;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return &LAB_5f571cd0;
    case 0x12:
      return &LAB_5f571d70;
    case 0x13:
      return &LAB_5f571a30;
    case 0x20:
      return &LAB_5f571e30;
    case 0x21:
      return &LAB_5f571eb0;
    case 0x42:
      return &LAB_5f571a50;
    }
  }
  return (undefined *)0x0;
}


