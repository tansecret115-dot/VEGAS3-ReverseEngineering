/* Module: sfpublish.dll
   Function: FUN_0042cad0
   Address: 0042cad0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_0042cad0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00446b90;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00446a10 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00446b70;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00446b80;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00446b60;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00446b50;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00446b40;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00446b10;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00446b30;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00446b20;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00446ae0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00446ad0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00446ac0;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00446ab0;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00446aa0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00446b00;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00446af0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_0042c020(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_0042ca20(pHVar1,ptVar2);
  }
  return ptVar2;
}


