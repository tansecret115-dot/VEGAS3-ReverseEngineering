/* Module: sfpaplug.dll
   Function: FUN_00441a80
   Address: 00441a80
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_00441a80(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_004610d0;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00460f50 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_004610b0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_004610c0;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_004610a0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00461090;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00461080;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00461050;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00461070;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00461060;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00461020;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00461010;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00461000;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00460ff0;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00460fe0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00461040;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00461030;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00440fd0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_004419d0(pHVar1,ptVar2);
  }
  return ptVar2;
}


