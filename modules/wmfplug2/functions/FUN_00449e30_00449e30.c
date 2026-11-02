/* Module: wmfplug2.dll
   Function: FUN_00449e30
   Address: 00449e30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_00449e30(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_0048eb90;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_0048ea10 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_0048eb70;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_0048eb80;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_0048eb60;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_0048eb50;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_0048eb40;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_0048eb10;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_0048eb30;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_0048eb20;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_0048eae0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_0048ead0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_0048eac0;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_0048eab0;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_0048eaa0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_0048eb00;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_0048eaf0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00449380(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00449d80(pHVar1,ptVar2);
  }
  return ptVar2;
}


