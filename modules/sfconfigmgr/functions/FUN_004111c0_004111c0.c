/* Module: sfconfigmgr.dll
   Function: FUN_004111c0
   Address: 004111c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSIZE FUN_004111c0(int param_1)

{
  HFONT pHVar1;
  LPSIZE ptVar2;
  
  switch(param_1) {
  case 100:
    ptVar2 = (LPSIZE)&DAT_00427e08;
    break;
  default:
    if (0x11 < param_1) {
      return (LPSIZE)0x0;
    }
    ptVar2 = (LPSIZE)(&DAT_00427c88 + param_1 * 8);
    break;
  case 0x66:
    ptVar2 = (LPSIZE)&DAT_00427de8;
    break;
  case 0x68:
    ptVar2 = (LPSIZE)&DAT_00427df8;
    break;
  case 0x6e:
    ptVar2 = (LPSIZE)&DAT_00427dd8;
    break;
  case 0x70:
    ptVar2 = (LPSIZE)&DAT_00427dc8;
    break;
  case 0x78:
    ptVar2 = (LPSIZE)&DAT_00427db8;
    break;
  case 0x81:
    ptVar2 = (LPSIZE)&DAT_00427d88;
    break;
  case 0x82:
    ptVar2 = (LPSIZE)&DAT_00427da8;
    break;
  case 0x86:
    ptVar2 = (LPSIZE)&DAT_00427d98;
    break;
  case 0x8c:
    ptVar2 = (LPSIZE)&DAT_00427d58;
    break;
  case 0x8d:
    ptVar2 = (LPSIZE)&DAT_00427d48;
    break;
  case 0x8e:
    ptVar2 = (LPSIZE)&DAT_00427d38;
    break;
  case 0x8f:
    ptVar2 = (LPSIZE)&DAT_00427d28;
    break;
  case 0x90:
    ptVar2 = (LPSIZE)&DAT_00427d18;
    break;
  case 0x91:
    ptVar2 = (LPSIZE)&DAT_00427d78;
    break;
  case 0x92:
    ptVar2 = (LPSIZE)&DAT_00427d68;
  }
  if ((ptVar2 != (LPSIZE)0x0) && (ptVar2->cy == 0)) {
    pHVar1 = FUN_00410710(param_1);
    if (pHVar1 == (HFONT)0x0) {
      return (LPSIZE)0x0;
    }
    FUN_00411110(pHVar1,ptVar2);
  }
  return ptVar2;
}


