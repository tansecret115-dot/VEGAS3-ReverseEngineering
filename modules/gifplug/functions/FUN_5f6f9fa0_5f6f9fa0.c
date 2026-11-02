/* Module: gifplug.dll
   Function: FUN_5f6f9fa0
   Address: 5f6f9fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f6f9fa0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5f730c60;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5f730ae0 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5f730c40;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5f730c50;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5f730c30;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5f730c20;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5f730c10;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5f730be0;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5f730c00;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5f730bf0;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5f730bb0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5f730ba0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5f730b90;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5f730b80;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5f730b70;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5f730bd0;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5f730bc0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f6f94f0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f6f9ef0(pHVar1,ptVar2);
  }
  return ptVar2;
}


