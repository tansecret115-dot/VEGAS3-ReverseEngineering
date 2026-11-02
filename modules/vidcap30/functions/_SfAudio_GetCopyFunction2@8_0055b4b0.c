/* Module: vidcap30.exe
   Function: _SfAudio_GetCopyFunction2@8
   Address: 0055b4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetCopyFunction2_8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* 0x15b4b0  232  _SfAudio_GetCopyFunction2@8 */
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_00555a80;
    case 0x11:
      return (code *)&LAB_00555b20;
    case 0x12:
      return (code *)&LAB_00555c70;
    case 0x13:
      return (code *)&LAB_00555d30;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8de8;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8de8)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e04;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e04)[uVar1];
    case 0x30:
      return (code *)&LAB_00555bc0;
    case 0x31:
      return (code *)&LAB_005559f0;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_00556660;
    case 0x11:
      return (code *)&LAB_00556710;
    case 0x12:
      return (code *)&LAB_00556cb0;
    case 0x13:
      return (code *)&LAB_00556e60;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e20;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e20)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e3c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e3c)[uVar1];
    case 0x30:
      return (code *)&LAB_00556c00;
    case 0x31:
      return (code *)&LAB_005565c0;
    case 0x40:
      return FUN_005567b0;
    case 0x41:
      return (code *)&LAB_00556d70;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_00558810;
    case 0x11:
      return (code *)&LAB_005588e0;
    case 0x12:
      return FUN_00558a90;
    case 0x13:
      return (code *)&LAB_00558b60;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e58;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e58)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e74;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e74)[uVar1];
    case 0x30:
      return (code *)&LAB_005589c0;
    case 0x31:
      return (code *)&LAB_00558750;
    case 0x41:
      return (code *)&LAB_005582d0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_00559a10;
    case 0x11:
      return (code *)&LAB_00559ad0;
    case 0x12:
      return (code *)&LAB_00559c60;
    case 0x13:
      return (code *)&LAB_00559d80;
    case 0x20:
      return (code *)&LAB_0055a040;
    case 0x21:
      return (code *)&LAB_0055a110;
    case 0x30:
      return (code *)&LAB_00559b90;
    case 0x31:
      return (code *)&LAB_00559950;
    case 0x42:
      return FUN_00559e20;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_0055a4d0;
    case 0x11:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_005b8e90;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_005b8e90)[uVar1];
    case 0x12:
      return (code *)&LAB_0055aad0;
    case 0x13:
      return (code *)&LAB_0055ac80;
    case 0x20:
      return (code *)&LAB_0055adb0;
    case 0x21:
      return (code *)&LAB_0055ae00;
    case 0x30:
      return (code *)&LAB_0055aa50;
    case 0x31:
      return (code *)&LAB_0055a440;
    case 0x40:
      return (code *)&LAB_0055a990;
    case 0x41:
      return (code *)&LAB_0055abb0;
    case 0x42:
      return (code *)&LAB_0055acf0;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_0055aef0;
    case 0x11:
      return (code *)&LAB_0055af80;
    case 0x12:
      return FUN_0055b150;
    case 0x13:
      return (code *)&LAB_0055b350;
    case 0x20:
      return (code *)&LAB_0055b3d0;
    case 0x21:
      return (code *)&LAB_0055b440;
    case 0x30:
      return (code *)&LAB_0055b0d0;
    case 0x31:
      return (code *)&LAB_0055ae60;
    case 0x40:
      return FUN_0055b010;
    case 0x41:
      return FUN_0055b240;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_005579d0;
    case 0x11:
      return (code *)&LAB_00557a80;
    case 0x12:
      return (code *)&LAB_00557bb0;
    case 0x13:
      return (code *)&LAB_00558530;
    case 0x20:
      return (code *)&LAB_005585c0;
    case 0x21:
      return (code *)&LAB_005586a0;
    case 0x30:
      return (code *)&LAB_00557b30;
    case 0x31:
      return (code *)&LAB_00557930;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_005552f0;
    case 0x11:
      return (code *)&LAB_00555390;
    case 0x12:
      return (code *)&LAB_005554f0;
    case 0x13:
      return (code *)&LAB_005555b0;
    case 0x20:
      return (code *)&LAB_00555650;
    case 0x21:
      return (code *)&LAB_00555710;
    case 0x30:
      return (code *)&LAB_00555430;
    case 0x31:
      return (code *)&LAB_00555250;
    case 0x40:
      return (code *)&LAB_005557d0;
    case 0x41:
      return (code *)&LAB_005558d0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_00556880;
    case 0x11:
      return (code *)&LAB_005569a0;
    case 0x12:
      return FUN_00556b50;
    case 0x13:
      return (code *)&LAB_005577f0;
    case 0x20:
      return (code *)&LAB_00557330;
    case 0x21:
      return (code *)&LAB_00557870;
    case 0x31:
      return FUN_00556910;
    case 0x40:
      return (code *)&LAB_005569c0;
    case 0x41:
      return FUN_00556aa0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_00557ca0;
    case 0x11:
      return (code *)&LAB_00558030;
    case 0x12:
      return (code *)&LAB_00558190;
    case 0x13:
      return (code *)&LAB_005598c0;
    case 0x20:
      return (code *)&LAB_00559850;
    case 0x21:
      return (code *)&LAB_005598e0;
    case 0x31:
      return (code *)&LAB_00557dd0;
    case 0x40:
      return (code *)&LAB_00557ef0;
    case 0x41:
      return (code *)&LAB_00558440;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return (code *)&LAB_0055a1e0;
    case 0x12:
      return (code *)&LAB_0055a280;
    case 0x13:
      return (code *)&LAB_00559f40;
    case 0x20:
      return (code *)&LAB_0055a340;
    case 0x21:
      return (code *)&LAB_0055a3c0;
    case 0x42:
      return (code *)&LAB_00559f60;
    }
  }
  return (code *)0x0;
}


