/* Module: sfcdi.dll
   Function: FUN_5bf36b10
   Address: 5bf36b10
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5bf36b10(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5bf76718;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5bf76598 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5bf766f8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5bf76708;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5bf766e8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5bf766d8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5bf766c8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5bf76698;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5bf766b8;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5bf766a8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5bf76668;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5bf76658;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5bf76648;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5bf76638;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5bf76628;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5bf76688;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5bf76678;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5bf36060(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5bf36a60(pHVar1,ptVar2);
  }
  return ptVar2;
}


