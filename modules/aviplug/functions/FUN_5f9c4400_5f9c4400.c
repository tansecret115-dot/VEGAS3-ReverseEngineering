/* Module: aviplug.dll
   Function: FUN_5f9c4400
   Address: 5f9c4400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5f9c4400(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  undefined *color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
  pHVar3 = DAT_5fa16068;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5fa16004)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5fa16004)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_5fa16004)[param_1] = pHVar1;
    pHVar3 = DAT_5fa16068;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5fa16068 != (HBRUSH)0x0) {
        return DAT_5fa16068;
      }
      pHVar2 = (HBITMAP)FUN_5f980de0(DAT_5f9f5978,(LPCSTR)0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5f9c450e;
      if (*(HBRUSH *)(&DAT_5fa0c428 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_5fa0c428 + param_1 * 4);
      }
      _DAT_5f9f3a8c = &DAT_5f9f3978 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_5f9f3a78);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_5fa1606c)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_5fa16068;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5fa15f1c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5fa15f1c)[param_1];
    }
    color_00 = FUN_5f9c4310(param_1);
    pHVar1 = CreateSolidBrush((COLORREF)color_00);
    (&DAT_5fa15f1c)[param_1] = pHVar1;
    pHVar3 = DAT_5fa16068;
  }
  DAT_5fa16068 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_5f9c450e:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


