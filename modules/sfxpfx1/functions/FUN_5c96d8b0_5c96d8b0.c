/* Module: sfxpfx1.dll
   Function: FUN_5c96d8b0
   Address: 5c96d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5c96d8b0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5c998e88;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5c998d08 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5c998e68;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5c998e78;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5c998e58;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5c998e48;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5c998e38;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5c998e08;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5c998e28;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5c998e18;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5c998dd8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5c998dc8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5c998db8;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5c998da8;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5c998d98;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5c998df8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5c998de8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5c96ce00(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5c96d800(pHVar1,ptVar2);
  }
  return ptVar2;
}


