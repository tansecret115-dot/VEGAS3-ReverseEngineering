/* Module: mp3plug.dll
   Function: FUN_5f6be610
   Address: 5f6be610
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f6be610(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5f7521e0;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5f752060 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5f7521c0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5f7521d0;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5f7521b0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5f7521a0;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5f752190;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5f752160;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5f752180;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5f752170;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5f752130;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5f752120;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5f752110;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5f752100;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5f7520f0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5f752150;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5f752140;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f6bdb60(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f6be560(pHVar1,ptVar2);
  }
  return ptVar2;
}


