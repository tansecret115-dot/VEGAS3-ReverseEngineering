/* Module: sfppack1.dll
   Function: FUN_5cdf3680
   Address: 5cdf3680
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5cdf3680(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5ce23f10;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5ce23d90 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5ce23ef0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5ce23f00;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5ce23ee0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5ce23ed0;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5ce23ec0;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5ce23e90;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5ce23eb0;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5ce23ea0;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5ce23e60;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5ce23e50;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5ce23e40;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5ce23e30;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5ce23e20;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5ce23e80;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5ce23e70;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5cdf2bd0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5cdf35d0(pHVar1,ptVar2);
  }
  return ptVar2;
}


