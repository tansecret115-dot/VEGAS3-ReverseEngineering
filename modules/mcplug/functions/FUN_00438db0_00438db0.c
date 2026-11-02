/* Module: mcplug.dll
   Function: FUN_00438db0
   Address: 00438db0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_00438db0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_0048cc38;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_0048cab8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_0048cc18;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_0048cc28;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_0048cc08;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_0048cbf8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_0048cbe8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_0048cbb8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_0048cbd8;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_0048cbc8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_0048cb88;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_0048cb78;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_0048cb68;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_0048cb58;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_0048cb48;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_0048cba8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_0048cb98;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00438300(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00438d00(pHVar1,ptVar2);
  }
  return ptVar2;
}


