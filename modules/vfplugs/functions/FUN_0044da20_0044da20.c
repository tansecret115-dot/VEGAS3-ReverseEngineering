/* Module: vfplugs.dll
   Function: FUN_0044da20
   Address: 0044da20
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0044da20(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00535128;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00534fa8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00535108;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00535118;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_005350f8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_005350e8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_005350d8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_005350a8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_005350c8;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_005350b8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00535078;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00535068;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00535058;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00535048;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00535038;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00535098;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00535088;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0044cf70(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0044d970(pHVar1,ptVar2);
  }
  return ptVar2;
}


