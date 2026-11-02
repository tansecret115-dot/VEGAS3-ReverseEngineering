/* Module: sfpagepeel.dll
   Function: FUN_0042fba0
   Address: 0042fba0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0042fba0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_0047e088;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_0047df08 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_0047e068;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_0047e078;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_0047e058;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_0047e048;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_0047e038;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_0047e008;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_0047e028;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_0047e018;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_0047dfd8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_0047dfc8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_0047dfb8;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_0047dfa8;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_0047df98;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_0047dff8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_0047dfe8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0042f0f0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0042faf0(pHVar1,ptVar2);
  }
  return ptVar2;
}


