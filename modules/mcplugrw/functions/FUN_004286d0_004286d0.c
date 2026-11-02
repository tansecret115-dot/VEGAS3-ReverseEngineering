/* Module: mcplugrw.dll
   Function: FUN_004286d0
   Address: 004286d0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_004286d0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_004a9d48;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_004a9bc8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_004a9d28;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_004a9d38;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_004a9d18;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_004a9d08;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_004a9cf8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_004a9cc8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_004a9ce8;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_004a9cd8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_004a9c98;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_004a9c88;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_004a9c78;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_004a9c68;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_004a9c58;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_004a9cb8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_004a9ca8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00427c20(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00428620(pHVar1,ptVar2);
  }
  return ptVar2;
}


