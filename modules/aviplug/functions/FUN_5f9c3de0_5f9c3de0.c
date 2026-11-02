/* Module: aviplug.dll
   Function: FUN_5f9c3de0
   Address: 5f9c3de0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5f9c3de0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5fa15ff8;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5fa15e78 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5fa15fd8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5fa15fe8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5fa15fc8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5fa15fb8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5fa15fa8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5fa15f78;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5fa15f98;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5fa15f88;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5fa15f48;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5fa15f38;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5fa15f28;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5fa15f18;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5fa15f08;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5fa15f68;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5fa15f58;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5f9c3330(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5f9c3d30(pHVar1,ptVar2);
  }
  return ptVar2;
}


