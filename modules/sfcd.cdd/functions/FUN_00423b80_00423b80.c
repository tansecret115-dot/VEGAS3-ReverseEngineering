/* Module: sfcd.cdd
   Function: FUN_00423b80
   Address: 00423b80
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_00423b80(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00441d60;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00441be0 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00441d40;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00441d50;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00441d30;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00441d20;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00441d10;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00441ce0;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00441d00;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00441cf0;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00441cb0;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00441ca0;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00441c90;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00441c80;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00441c70;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00441cd0;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00441cc0;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_004230d0(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00423ad0(pHVar1,ptVar2);
  }
  return ptVar2;
}


