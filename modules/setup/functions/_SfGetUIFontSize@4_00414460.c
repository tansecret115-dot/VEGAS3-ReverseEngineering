/* Module: Setup.exe
   Function: _SfGetUIFontSize@4
   Address: 00414460
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE _SfGetUIFontSize_4(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
                    /* 0x14460  184  _SfGetUIFontSize@4 */
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_004492a8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00449128 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00449288;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00449298;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00449278;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00449268;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00449258;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00449228;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00449248;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00449238;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_004491f8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_004491e8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_004491d8;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_004491c8;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_004491b8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00449218;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00449208;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = _SfGetUIFont_4(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    _SfGetFontSize_8(pHVar1,ptVar2);
  }
  return ptVar2;
}


