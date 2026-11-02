/* Module: vidcap30.exe
   Function: _SfGetUIBrush@4
   Address: 0047d420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH _SfGetUIBrush_4(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  COLORREF color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
                    /* 0x7d420  436  _SfGetUIBrush@4 */
  pHVar3 = DAT_005bc670;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_005bc60c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_005bc60c)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_005bc60c)[param_1] = pHVar1;
    pHVar3 = DAT_005bc670;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_005bc670 != (HBRUSH)0x0) {
        return DAT_005bc670;
      }
      pHVar2 = (HBITMAP)_SfLoadBitmap_8(DAT_005c16d8,0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_0047d52e;
      if (*(HBRUSH *)(&DAT_005b2a30 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_005b2a30 + param_1 * 4);
      }
      _DAT_005b6924 = &DAT_005b6810 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_005b6910);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_005bc674)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_005bc670;
    }
  }
  else {
    if ((HBRUSH)(&DAT_005bc524)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_005bc524)[param_1];
    }
    color_00 = _SfGetUIColorAbsolute_4(param_1);
    pHVar1 = CreateSolidBrush(color_00);
    (&DAT_005bc524)[param_1] = pHVar1;
    pHVar3 = DAT_005bc670;
  }
  DAT_005bc670 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_0047d52e:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


