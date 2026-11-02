/* Module: oggplug.dll
   Function: FUN_0041e200
   Address: 0041e200
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0041e200(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_005112e0;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00511160 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_005112c0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_005112d0;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_005112b0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_005112a0;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00511290;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00511260;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00511280;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00511270;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00511230;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00511220;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00511210;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00511200;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_005111f0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00511250;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00511240;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0041d750(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0041e150(pHVar1,ptVar2);
  }
  return ptVar2;
}


