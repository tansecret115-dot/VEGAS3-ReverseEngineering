/* Module: sfppack2.dll
   Function: FUN_5cd2c4f0
   Address: 5cd2c4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5cd2c4f0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5cd682e8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5cd68168 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5cd682c8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5cd682d8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5cd682b8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5cd682a8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5cd68298;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5cd68268;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5cd68288;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5cd68278;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5cd68238;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5cd68228;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5cd68218;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5cd68208;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5cd681f8;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5cd68258;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5cd68248;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5cd2ba40(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5cd2c440(pHVar1,ptVar2);
  }
  return ptVar2;
}


