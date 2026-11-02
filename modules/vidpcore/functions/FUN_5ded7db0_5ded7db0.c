/* Module: vidpcore.dll
   Function: FUN_5ded7db0
   Address: 5ded7db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5ded7db0(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  COLORREF color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
  pHVar3 = DAT_5dfc3600;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5dfc359c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5dfc359c)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_5dfc359c)[param_1] = pHVar1;
    pHVar3 = DAT_5dfc3600;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5dfc3600 != (HBRUSH)0x0) {
        return DAT_5dfc3600;
      }
      pHVar2 = (HBITMAP)FUN_5deb7900(DAT_5df42ed8,0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5ded7ebe;
      if (*(HBRUSH *)(&DAT_5dfb99c0 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_5dfb99c0 + param_1 * 4);
      }
      _DAT_5df3e824 = &DAT_5df3e710 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_5df3e810);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_5dfc3604)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_5dfc3600;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5dfc34b4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5dfc34b4)[param_1];
    }
    color_00 = FUN_5ded7cc0(param_1);
    pHVar1 = CreateSolidBrush(color_00);
    (&DAT_5dfc34b4)[param_1] = pHVar1;
    pHVar3 = DAT_5dfc3600;
  }
  DAT_5dfc3600 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_5ded7ebe:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


