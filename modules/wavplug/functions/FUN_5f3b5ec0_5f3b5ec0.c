/* Module: wavplug.dll
   Function: FUN_5f3b5ec0
   Address: 5f3b5ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f3b5ec0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5f3e02b8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5f3e0138 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5f3e0298;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5f3e02a8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5f3e0288;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5f3e0278;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5f3e0268;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5f3e0238;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5f3e0258;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5f3e0248;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5f3e0208;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5f3e01f8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5f3e01e8;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5f3e01d8;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5f3e01c8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5f3e0228;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5f3e0218;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f3b5410(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f3b5e10(pHVar1,ptVar2);
  }
  return ptVar2;
}


