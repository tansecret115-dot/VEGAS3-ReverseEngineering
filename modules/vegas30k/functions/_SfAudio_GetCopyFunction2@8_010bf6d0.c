/* Module: vegas30k.dll
   Function: _SfAudio_GetCopyFunction2@8
   Address: 010bf6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetCopyFunction2_8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* 0xbf6d0  744  _SfAudio_GetCopyFunction2@8 */
  switch(param_1) {
  case 0x10:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010b9ca0;
    case 0x11:
      return (code *)&LAB_010b9d40;
    case 0x12:
      return (code *)&LAB_010b9e90;
    case 0x13:
      return (code *)&LAB_010b9f50;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_01206460;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_01206460)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_0120647c;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_0120647c)[uVar1];
    case 0x30:
      return (code *)&LAB_010b9de0;
    case 0x31:
      return (code *)&LAB_010b9c10;
    }
    break;
  case 0x11:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010ba880;
    case 0x11:
      return (code *)&LAB_010ba930;
    case 0x12:
      return (code *)&LAB_010baed0;
    case 0x13:
      return (code *)&LAB_010bb080;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_01206498;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_01206498)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_012064b4;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_012064b4)[uVar1];
    case 0x30:
      return (code *)&LAB_010bae20;
    case 0x31:
      return (code *)&LAB_010ba7e0;
    case 0x40:
      return FUN_010ba9d0;
    case 0x41:
      return (code *)&LAB_010baf90;
    }
    break;
  case 0x12:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010bca30;
    case 0x11:
      return (code *)&LAB_010bcb00;
    case 0x12:
      return FUN_010bccb0;
    case 0x13:
      return (code *)&LAB_010bcd80;
    case 0x20:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_012064d0;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_012064d0)[uVar1];
    case 0x21:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_012064ec;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_012064ec)[uVar1];
    case 0x30:
      return (code *)&LAB_010bcbe0;
    case 0x31:
      return (code *)&LAB_010bc970;
    case 0x41:
      return (code *)&LAB_010bc4f0;
    }
    break;
  case 0x13:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010bdc30;
    case 0x11:
      return (code *)&LAB_010bdcf0;
    case 0x12:
      return (code *)&LAB_010bde80;
    case 0x13:
      return (code *)&LAB_010bdfa0;
    case 0x20:
      return (code *)&LAB_010be260;
    case 0x21:
      return (code *)&LAB_010be330;
    case 0x30:
      return (code *)&LAB_010bddb0;
    case 0x31:
      return (code *)&LAB_010bdb70;
    case 0x42:
      return FUN_010be040;
    }
    break;
  case 0x20:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010be6f0;
    case 0x11:
      uVar1 = _SfGetCPUSupport_4(0xf);
      if ((int)uVar1 < 0) {
        return (code *)PTR_LAB_01206508;
      }
      if (6 < uVar1) {
        uVar1 = 6;
      }
      return (code *)(&PTR_LAB_01206508)[uVar1];
    case 0x12:
      return (code *)&LAB_010becf0;
    case 0x13:
      return (code *)&LAB_010beea0;
    case 0x20:
      return (code *)&LAB_010befd0;
    case 0x21:
      return (code *)&LAB_010bf020;
    case 0x30:
      return (code *)&LAB_010bec70;
    case 0x31:
      return (code *)&LAB_010be660;
    case 0x40:
      return (code *)&LAB_010bebb0;
    case 0x41:
      return (code *)&LAB_010bedd0;
    case 0x42:
      return (code *)&LAB_010bef10;
    }
    break;
  case 0x21:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010bf110;
    case 0x11:
      return (code *)&LAB_010bf1a0;
    case 0x12:
      return FUN_010bf370;
    case 0x13:
      return (code *)&LAB_010bf570;
    case 0x20:
      return (code *)&LAB_010bf5f0;
    case 0x21:
      return (code *)&LAB_010bf660;
    case 0x30:
      return (code *)&LAB_010bf2f0;
    case 0x31:
      return (code *)&LAB_010bf080;
    case 0x40:
      return FUN_010bf230;
    case 0x41:
      return FUN_010bf460;
    }
    break;
  case 0x30:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010bbbf0;
    case 0x11:
      return (code *)&LAB_010bbca0;
    case 0x12:
      return (code *)&LAB_010bbdd0;
    case 0x13:
      return (code *)&LAB_010bc750;
    case 0x20:
      return (code *)&LAB_010bc7e0;
    case 0x21:
      return (code *)&LAB_010bc8c0;
    case 0x30:
      return (code *)&LAB_010bbd50;
    case 0x31:
      return (code *)&LAB_010bbb50;
    }
    break;
  case 0x31:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010b9510;
    case 0x11:
      return (code *)&LAB_010b95b0;
    case 0x12:
      return (code *)&LAB_010b9710;
    case 0x13:
      return (code *)&LAB_010b97d0;
    case 0x20:
      return (code *)&LAB_010b9870;
    case 0x21:
      return (code *)&LAB_010b9930;
    case 0x30:
      return (code *)&LAB_010b9650;
    case 0x31:
      return (code *)&LAB_010b9470;
    case 0x40:
      return (code *)&LAB_010b99f0;
    case 0x41:
      return (code *)&LAB_010b9af0;
    }
    break;
  case 0x40:
    switch(param_2) {
    case 0x10:
      return FUN_010baaa0;
    case 0x11:
      return (code *)&LAB_010babc0;
    case 0x12:
      return FUN_010bad70;
    case 0x13:
      return (code *)&LAB_010bba10;
    case 0x20:
      return (code *)&LAB_010bb550;
    case 0x21:
      return (code *)&LAB_010bba90;
    case 0x31:
      return FUN_010bab30;
    case 0x40:
      return (code *)&LAB_010babe0;
    case 0x41:
      return FUN_010bacc0;
    }
    break;
  case 0x41:
    switch(param_2) {
    case 0x10:
      return (code *)&LAB_010bbec0;
    case 0x11:
      return (code *)&LAB_010bc250;
    case 0x12:
      return (code *)&LAB_010bc3b0;
    case 0x13:
      return (code *)&LAB_010bdae0;
    case 0x20:
      return (code *)&LAB_010bda70;
    case 0x21:
      return (code *)&LAB_010bdb00;
    case 0x31:
      return (code *)&LAB_010bbff0;
    case 0x40:
      return (code *)&LAB_010bc110;
    case 0x41:
      return (code *)&LAB_010bc660;
    }
    break;
  case 0x42:
    switch(param_2) {
    case 0x11:
      return (code *)&LAB_010be400;
    case 0x12:
      return (code *)&LAB_010be4a0;
    case 0x13:
      return (code *)&LAB_010be160;
    case 0x20:
      return (code *)&LAB_010be560;
    case 0x21:
      return (code *)&LAB_010be5e0;
    case 0x42:
      return (code *)&LAB_010be180;
    }
  }
  return (code *)0x0;
}


