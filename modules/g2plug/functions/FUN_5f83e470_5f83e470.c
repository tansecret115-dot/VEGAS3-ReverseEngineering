/* Module: g2plug.dll
   Function: FUN_5f83e470
   Address: 5f83e470
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f83e470(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5f877970;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5f8777f0 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5f877950;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5f877960;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5f877940;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5f877930;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5f877920;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5f8778f0;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5f877910;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5f877900;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5f8778c0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5f8778b0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5f8778a0;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5f877890;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5f877880;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5f8778e0;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5f8778d0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f83d9c0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f83e3c0(pHVar1,ptVar2);
  }
  return ptVar2;
}


