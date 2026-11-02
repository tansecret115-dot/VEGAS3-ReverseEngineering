/* Module: vidcap30.exe
   Function: _SfGetUIFontSize@4
   Address: 0047ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetUIFontSize_4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0x7ce00  442  _SfGetUIFontSize@4 */
  switch(param_1) {
  case 100:
    puVar2 = &DAT_005bc600;
    break;
  default:
    if (0x11 < param_1) {
      return (undefined *)0x0;
    }
    puVar2 = &DAT_005bc480 + param_1 * 8;
    break;
  case 0x66:
    puVar2 = &DAT_005bc5e0;
    break;
  case 0x68:
    puVar2 = &DAT_005bc5f0;
    break;
  case 0x6e:
    puVar2 = &DAT_005bc5d0;
    break;
  case 0x70:
    puVar2 = &DAT_005bc5c0;
    break;
  case 0x78:
    puVar2 = &DAT_005bc5b0;
    break;
  case 0x81:
    puVar2 = &DAT_005bc580;
    break;
  case 0x82:
    puVar2 = &DAT_005bc5a0;
    break;
  case 0x86:
    puVar2 = &DAT_005bc590;
    break;
  case 0x8c:
    puVar2 = &DAT_005bc550;
    break;
  case 0x8d:
    puVar2 = &DAT_005bc540;
    break;
  case 0x8e:
    puVar2 = &DAT_005bc530;
    break;
  case 0x8f:
    puVar2 = &DAT_005bc520;
    break;
  case 0x90:
    puVar2 = &DAT_005bc510;
    break;
  case 0x91:
    puVar2 = &DAT_005bc570;
    break;
  case 0x92:
    puVar2 = &DAT_005bc560;
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


