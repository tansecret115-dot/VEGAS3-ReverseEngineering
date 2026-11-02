/* Module: sftrans1.dll
   Function: FUN_004e53f0
   Address: 004e53f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_004e53f0(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  COLORREF color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
  pHVar3 = DAT_005fbf88;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_005fbf24)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_005fbf24)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_005fbf24)[param_1] = pHVar1;
    pHVar3 = DAT_005fbf88;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_005fbf88 != (HBRUSH)0x0) {
        return DAT_005fbf88;
      }
      pHVar2 = (HBITMAP)FUN_004c9390(DAT_0057b888,0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_004e54fe;
      if (*(HBRUSH *)(&DAT_005f2348 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_005f2348 + param_1 * 4);
      }
      _DAT_005764a4 = &DAT_00576390 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_00576490);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_005fbf8c)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_005fbf88;
    }
  }
  else {
    if ((HBRUSH)(&DAT_005fbe3c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_005fbe3c)[param_1];
    }
    color_00 = FUN_004e5300(param_1);
    pHVar1 = CreateSolidBrush(color_00);
    (&DAT_005fbe3c)[param_1] = pHVar1;
    pHVar3 = DAT_005fbf88;
  }
  DAT_005fbf88 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_004e54fe:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


