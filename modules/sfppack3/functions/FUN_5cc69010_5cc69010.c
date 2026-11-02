/* Module: sfppack3.dll
   Function: FUN_5cc69010
   Address: 5cc69010
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5cc69010(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5cc989e8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5cc98868 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5cc989c8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5cc989d8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5cc989b8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5cc989a8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5cc98998;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5cc98968;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5cc98988;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5cc98978;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5cc98938;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5cc98928;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5cc98918;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5cc98908;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5cc988f8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5cc98958;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5cc98948;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5cc68560(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5cc68f60(pHVar1,ptVar2);
  }
  return ptVar2;
}


