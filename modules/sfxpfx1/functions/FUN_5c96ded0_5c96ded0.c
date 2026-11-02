/* Module: sfxpfx1.dll
   Function: FUN_5c96ded0
   Address: 5c96ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5c96ded0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5c998ef8;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5c998e94)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5c998e94)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5c998e94)[param_1] = pHVar2;
    pHVar4 = DAT_5c998ef8;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5c998ef8 != (HBRUSH)0x0) {
        return DAT_5c998ef8;
      }
      pHVar3 = (HBITMAP)FUN_5c9556d0(DAT_5c9987a0,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5c96dfde;
      if (*(HBRUSH *)
           ("File or directory (%s) already exists. Do you wish to replace the existing file?" +
           param_1 * 4 + 0xc) != (HBRUSH)0x0) {
        return *(HBRUSH *)
                ("File or directory (%s) already exists. Do you wish to replace the existing file?"
                + param_1 * 4 + 0xc);
      }
      _DAT_5c997e4c = &DAT_5c997d38 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5c997e38);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5c998efc)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5c998ef8;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5c998dac)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5c998dac)[param_1];
    }
    DVar1 = FUN_5c96dde0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5c998dac)[param_1] = pHVar2;
    pHVar4 = DAT_5c998ef8;
  }
  DAT_5c998ef8 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5c96dfde:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


