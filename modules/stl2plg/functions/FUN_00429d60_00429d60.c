/* Module: stl2plg.dll
   Function: FUN_00429d60
   Address: 00429d60
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_00429d60(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00478368;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_004781e8 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00478348;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00478358;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00478338;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00478328;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00478318;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_004782e8;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00478308;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_004782f8;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_004782b8;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_004782a8;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00478298;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00478288;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00478278;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_004782d8;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_004782c8;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_004292b0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00429cb0(pHVar1,ptVar2);
  }
  return ptVar2;
}


