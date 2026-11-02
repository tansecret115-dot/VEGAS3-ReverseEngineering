/* Module: extmondrv.dll
   Function: FUN_004248d0
   Address: 004248d0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_004248d0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_0045b7d0;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_0045b650 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_0045b7b0;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_0045b7c0;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_0045b7a0;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_0045b790;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_0045b780;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_0045b750;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_0045b770;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_0045b760;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_0045b720;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_0045b710;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_0045b700;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_0045b6f0;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_0045b6e0;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_0045b740;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_0045b730;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00423e20(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00424820(pHVar1,ptVar2);
  }
  return ptVar2;
}


