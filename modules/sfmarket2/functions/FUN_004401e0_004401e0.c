/* Module: sfmarket2.dll
   Function: FUN_004401e0
   Address: 004401e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_004401e0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_004afc68;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_004afae8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_004afc48;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_004afc58;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_004afc38;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_004afc28;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_004afc18;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_004afbe8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_004afc08;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_004afbf8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_004afbb8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_004afba8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_004afb98;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_004afb88;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_004afb78;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_004afbd8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_004afbc8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0043f730(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00440130(pHVar1,ptVar2);
  }
  return ptVar2;
}


