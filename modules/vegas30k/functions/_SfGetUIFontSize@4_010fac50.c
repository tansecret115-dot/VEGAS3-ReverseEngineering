/* Module: vegas30k.dll
   Function: _SfGetUIFontSize@4
   Address: 010fac50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetUIFontSize_4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0xfac50  994  _SfGetUIFontSize@4 */
  switch(param_1) {
  case 100:
    puVar2 = &DAT_012af168;
    break;
  default:
    if (0x11 < param_1) {
      return (undefined *)0x0;
    }
    puVar2 = &DAT_012aefe8 + param_1 * 8;
    break;
  case 0x66:
    puVar2 = &DAT_012af148;
    break;
  case 0x68:
    puVar2 = &DAT_012af158;
    break;
  case 0x6e:
    puVar2 = &DAT_012af138;
    break;
  case 0x70:
    puVar2 = &DAT_012af128;
    break;
  case 0x78:
    puVar2 = &DAT_012af118;
    break;
  case 0x81:
    puVar2 = &DAT_012af0e8;
    break;
  case 0x82:
    puVar2 = &DAT_012af108;
    break;
  case 0x86:
    puVar2 = &DAT_012af0f8;
    break;
  case 0x8c:
    puVar2 = &DAT_012af0b8;
    break;
  case 0x8d:
    puVar2 = &DAT_012af0a8;
    break;
  case 0x8e:
    puVar2 = &DAT_012af098;
    break;
  case 0x8f:
    puVar2 = &DAT_012af088;
    break;
  case 0x90:
    puVar2 = &DAT_012af078;
    break;
  case 0x91:
    puVar2 = &DAT_012af0d8;
    break;
  case 0x92:
    puVar2 = &DAT_012af0c8;
  }
  if ((puVar2 != (undefined *)0x0) && (*(int *)(puVar2 + 4) == 0)) {
    iVar1 = _SfGetUIFont_4(param_1);
    if (iVar1 == 0) {
      return (undefined *)0x0;
    }
    _SfGetFontSize_8(iVar1,puVar2);
  }
  return puVar2;
}


