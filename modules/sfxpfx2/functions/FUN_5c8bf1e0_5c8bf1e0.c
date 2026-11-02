/* Module: sfxpfx2.dll
   Function: FUN_5c8bf1e0
   Address: 5c8bf1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_5c8bf1e0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_5c8e9ae0;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_5c8e9960 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_5c8e9ac0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_5c8e9ad0;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_5c8e9ab0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_5c8e9aa0;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_5c8e9a90;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_5c8e9a60;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_5c8e9a80;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_5c8e9a70;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_5c8e9a30;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_5c8e9a20;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_5c8e9a10;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_5c8e9a00;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_5c8e99f0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_5c8e9a50;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_5c8e9a40;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_5c8be730(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_5c8bf130(pHVar1,ptVar2);
  }
  return ptVar2;
}


