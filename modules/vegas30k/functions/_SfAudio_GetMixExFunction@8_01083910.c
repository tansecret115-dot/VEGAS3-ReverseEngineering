/* Module: vegas30k.dll
   Function: _SfAudio_GetMixExFunction@8
   Address: 01083910
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetMixExFunction_8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* 0x83910  748  _SfAudio_GetMixExFunction@8 */
  uVar1 = _SfAudio_GetSampleType_4(param_2);
  iVar2 = _SfAudio_GetSampleType_4(param_1);
  if (*(short *)(param_1 + 2) == 1) {
    if (iVar2 == 0x20) {
      switch(uVar1) {
      case 0x10:
        return (code *)&LAB_01081570;
      case 0x11:
        return (code *)&LAB_010816b0;
      case 0x12:
        return FUN_010818b0;
      case 0x13:
        return (code *)&LAB_010817d0;
      case 0x20:
        return (code *)&LAB_01081a40;
      case 0x21:
        return (code *)&LAB_01081b10;
      case 0x30:
        return (code *)&LAB_01081d00;
      case 0x31:
        return (code *)&LAB_01081be0;
      }
    }
    else if (iVar2 == 0x21) {
      switch(uVar1) {
      case 0x10:
        return (code *)&LAB_01081de0;
      case 0x11:
        return (code *)&LAB_01081f20;
      case 0x12:
        return FUN_01082120;
      case 0x13:
        return (code *)&LAB_01082040;
      case 0x20:
        return (code *)&LAB_010822b0;
      case 0x21:
        return (code *)&LAB_01082380;
      case 0x30:
        return (code *)&LAB_01082570;
      case 0x31:
        return (code *)&LAB_01082450;
      }
    }
  }
  else if (*(short *)(param_1 + 2) == 2) {
    if (iVar2 == 0x20) {
      switch(uVar1) {
      case 0x10:
        return (code *)&LAB_01082650;
      case 0x11:
        return (code *)&LAB_010827a0;
      case 0x12:
        return FUN_010829e0;
      case 0x13:
        return (code *)&LAB_010828d0;
      case 0x20:
        return (code *)&LAB_01082b90;
      case 0x21:
        return (code *)&LAB_01082ca0;
      case 0x30:
        return (code *)&LAB_01082ec0;
      case 0x31:
        return (code *)&LAB_01082d90;
      }
    }
    else if (iVar2 == 0x21) {
      switch(uVar1) {
      case 0x10:
        return (code *)&LAB_01082fd0;
      case 0x11:
        return (code *)&LAB_01083120;
      case 0x12:
        return FUN_01083340;
      case 0x13:
        return (code *)&LAB_01083250;
      case 0x20:
        return (code *)&LAB_010834f0;
      case 0x21:
        return (code *)&LAB_010835e0;
      case 0x30:
        return (code *)&LAB_01083820;
      case 0x31:
        return (code *)&LAB_010836f0;
      }
    }
  }
  if (iVar2 == 0x20) {
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_01080170;
    case 0x11:
      return (code *)&LAB_01080290;
    case 0x12:
      return (code *)&LAB_01080500;
    case 0x13:
      return (code *)&LAB_010803e0;
    case 0x20:
      return (code *)&LAB_01080690;
    case 0x21:
      return (code *)&LAB_010807b0;
    case 0x30:
      return (code *)&LAB_01080a10;
    case 0x31:
      return (code *)&LAB_010808f0;
    }
  }
  else if (iVar2 == 0x21) {
    switch(uVar1) {
    case 0x10:
      return (code *)&LAB_01080b30;
    case 0x11:
      return (code *)&LAB_01080c50;
    case 0x12:
      return FUN_01080ee0;
    case 0x13:
      return (code *)&LAB_01080da0;
    case 0x20:
      return (code *)&LAB_010810b0;
    case 0x21:
      return (code *)&LAB_010811f0;
    case 0x30:
      return (code *)&LAB_01081430;
    case 0x31:
      return (code *)&LAB_01081310;
    }
  }
  return (code *)0x0;
}


