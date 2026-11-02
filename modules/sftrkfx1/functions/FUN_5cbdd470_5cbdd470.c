/* Module: sftrkfx1.dll
   Function: FUN_5cbdd470
   Address: 5cbdd470
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5cbdd470(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5cc11be8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5cc11a68 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5cc11bc8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5cc11bd8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5cc11bb8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5cc11ba8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5cc11b98;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5cc11b68;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5cc11b88;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5cc11b78;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5cc11b38;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5cc11b28;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5cc11b18;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5cc11b08;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5cc11af8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5cc11b58;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5cc11b48;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5cbdc9c0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5cbdd3c0(pHVar1,ptVar2);
  }
  return ptVar2;
}


