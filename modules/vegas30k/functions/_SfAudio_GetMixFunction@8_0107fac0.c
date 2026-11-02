/* Module: vegas30k.dll
   Function: _SfAudio_GetMixFunction@8
   Address: 0107fac0
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetMixFunction_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0x7fac0  749  _SfAudio_GetMixFunction@8 */
  uVar1 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = _SfAudio_GetSampleType_4(param_1);
  switch(uVar2) {
  case 0x10:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107d6c0;
    case 0x11:
      return (code *)&LAB_0107d790;
    case 0x12:
      return FUN_0107d980;
    case 0x13:
      return (code *)&LAB_0107da80;
    case 0x20:
      return (code *)&LAB_0107db60;
    case 0x21:
      return (code *)&LAB_0107dbf0;
    case 0x30:
      return (code *)&LAB_0107d880;
    case 0x31:
      return (code *)&LAB_0107d5e0;
    }
    break;
  case 0x11:
    switch(uVar1) {
    case 0x10:
      return FUN_0107dd60;
    case 0x11:
      return (code *)&LAB_0107de70;
    case 0x12:
      return FUN_0107e030;
    case 0x13:
      return (code *)&LAB_0107e130;
    case 0x20:
      return (code *)&LAB_0107e210;
    case 0x21:
      return (code *)&LAB_0107e2b0;
    case 0x30:
      return (code *)&LAB_0107df40;
    case 0x31:
      return (code *)&LAB_0107dc80;
    }
    break;
  case 0x12:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107ea90;
    case 0x11:
      return (code *)&LAB_0107eb60;
    case 0x12:
      return FUN_0107ecf0;
    case 0x13:
      return (code *)&LAB_0107ede0;
    case 0x20:
      return (code *)&LAB_0107eea0;
    case 0x21:
      return FUN_0107ef60;
    case 0x30:
      return (code *)&LAB_0107ec30;
    case 0x31:
      return (code *)&LAB_0107e9d0;
    }
    break;
  case 0x13:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107f0d0;
    case 0x11:
      return (code *)&LAB_0107f170;
    case 0x12:
      return (code *)&LAB_0107f2b0;
    case 0x13:
      return (code *)&LAB_0107f370;
    case 0x20:
      return (code *)&LAB_0107f410;
    case 0x21:
      return (code *)&LAB_0107f4a0;
    case 0x30:
      return (code *)&LAB_0107f210;
    case 0x31:
      return (code *)&LAB_0107f030;
    }
    break;
  case 0x20:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107f590;
    case 0x11:
      return (code *)&LAB_0107f5f0;
    case 0x12:
      return (code *)&LAB_0107f6a0;
    case 0x13:
      return (code *)&LAB_0107f720;
    case 0x20:
      return (code *)&LAB_0107f770;
    case 0x21:
      return (code *)&LAB_0107f7b0;
    case 0x30:
      return (code *)&LAB_0107f650;
    case 0x31:
      return (code *)&LAB_0107f530;
    }
    break;
  case 0x21:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107f850;
    case 0x11:
      return (code *)&LAB_0107f8b0;
    case 0x12:
      return FUN_0107f960;
    case 0x13:
      return (code *)&LAB_0107f9e0;
    case 0x20:
      return (code *)&LAB_0107fa30;
    case 0x21:
      return (code *)&LAB_0107fa70;
    case 0x30:
      return (code *)&LAB_0107f910;
    case 0x31:
      return (code *)&LAB_0107f7f0;
    }
    break;
  case 0x30:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107e440;
    case 0x11:
      return (code *)&LAB_0107e540;
    case 0x12:
      return FUN_0107e6e0;
    case 0x13:
      return (code *)&LAB_0107e7e0;
    case 0x20:
      return (code *)&LAB_0107e8b0;
    case 0x21:
      return (code *)&LAB_0107e940;
    case 0x30:
      return (code *)&LAB_0107e630;
    case 0x31:
      return (code *)&LAB_0107e350;
    }
    break;
  case 0x31:
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_0107cfe0;
    case 0x11:
      return (code *)&LAB_0107d0d0;
    case 0x12:
      return FUN_0107d2c0;
    case 0x13:
      return (code *)&LAB_0107d3c0;
    case 0x20:
      return (code *)&LAB_0107d4a0;
    case 0x21:
      return (code *)&LAB_0107d540;
    case 0x30:
      return (code *)&LAB_0107d1c0;
    case 0x31:
      return (code *)&LAB_0107cef0;
    }
  }
  return (code *)0x0;
}


