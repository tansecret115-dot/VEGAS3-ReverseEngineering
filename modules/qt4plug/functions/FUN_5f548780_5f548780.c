/* Module: qt4plug.dll
   Function: FUN_5f548780
   Address: 5f548780
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f548780(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5f5a8eb8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5f5a8d38 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5f5a8e98;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5f5a8ea8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5f5a8e88;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5f5a8e78;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5f5a8e68;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5f5a8e38;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5f5a8e58;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5f5a8e48;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5f5a8e08;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5f5a8df8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5f5a8de8;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5f5a8dd8;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5f5a8dc8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5f5a8e28;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5f5a8e18;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f547cd0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f5486d0(pHVar1,ptVar2);
  }
  return ptVar2;
}


