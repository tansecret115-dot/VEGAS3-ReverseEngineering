/* Module: aifplug.dll
   Function: FUN_5fbf6a40
   Address: 5fbf6a40
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5fbf6a40(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5fc0e668;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5fc0e4e8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5fc0e648;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5fc0e658;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5fc0e638;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5fc0e628;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5fc0e618;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5fc0e5e8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5fc0e608;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5fc0e5f8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5fc0e5b8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5fc0e5a8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5fc0e598;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5fc0e588;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5fc0e578;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5fc0e5d8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5fc0e5c8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5fbf5f90(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5fbf6990(pHVar1,ptVar2);
  }
  return ptVar2;
}


