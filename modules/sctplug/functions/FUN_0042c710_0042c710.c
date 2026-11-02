/* Module: sctplug.dll
   Function: FUN_0042c710
   Address: 0042c710
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0042c710(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00441c68;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00441ae8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00441c48;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00441c58;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00441c38;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00441c28;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00441c18;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00441be8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00441c08;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00441bf8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00441bb8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00441ba8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00441b98;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00441b88;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00441b78;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00441bd8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00441bc8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0042bc60(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0042c660(pHVar1,ptVar2);
  }
  return ptVar2;
}


