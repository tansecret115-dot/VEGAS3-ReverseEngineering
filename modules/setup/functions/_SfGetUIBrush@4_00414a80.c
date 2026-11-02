/* Module: Setup.exe
   Function: _SfGetUIBrush@4
   Address: 00414a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH _SfGetUIBrush_4(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  undefined *color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
                    /* 0x14a80  178  _SfGetUIBrush@4 */
  pHVar3 = DAT_00449318;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_004492b4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_004492b4)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_004492b4)[param_1] = pHVar1;
    pHVar3 = DAT_00449318;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_00449318 != (HBRUSH)0x0) {
        return DAT_00449318;
      }
      pHVar2 = (HBITMAP)_SfLoadBitmap_8(DAT_00448e00,(LPCSTR)0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_00414b8e;
      if ((HBRUSH)(&DAT_0043f6d8)[param_1] != (HBRUSH)0x0) {
        return (HBRUSH)(&DAT_0043f6d8)[param_1];
      }
      _DAT_00444054 = &DAT_00443f40 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_00444040);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_0044931c)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_00449318;
    }
  }
  else {
    if ((HBRUSH)(&DAT_004491cc)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_004491cc)[param_1];
    }
    color_00 = _SfGetUIColorAbsolute_4(param_1);
    pHVar1 = CreateSolidBrush((COLORREF)color_00);
    (&DAT_004491cc)[param_1] = pHVar1;
    pHVar3 = DAT_00449318;
  }
  DAT_00449318 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_00414b8e:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


