/* Module: sfnetmedia.dll
   Function: FUN_0042c5c0
   Address: 0042c5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0042c5c0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00446c90;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00446b10 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00446c70;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00446c80;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00446c60;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00446c50;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00446c40;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00446c10;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00446c30;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00446c20;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00446be0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00446bd0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00446bc0;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00446bb0;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00446ba0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00446c00;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00446bf0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0042bb10(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0042c510(pHVar1,ptVar2);
  }
  return ptVar2;
}


