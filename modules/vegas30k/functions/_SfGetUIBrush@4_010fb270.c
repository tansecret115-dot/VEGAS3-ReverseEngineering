/* Module: vegas30k.dll
   Function: _SfGetUIBrush@4
   Address: 010fb270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH _SfGetUIBrush_4(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  COLORREF color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
                    /* 0xfb270  988  _SfGetUIBrush@4 */
  pHVar3 = DAT_012af1d8;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_012af174)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_012af174)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_012af174)[param_1] = pHVar1;
    pHVar3 = DAT_012af1d8;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_012af1d8 != (HBRUSH)0x0) {
        return DAT_012af1d8;
      }
      pHVar2 = (HBITMAP)_SfLoadBitmap_8(DAT_0120e5c8,0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_010fb37e;
      if (*(HBRUSH *)(&DAT_012a5598 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_012a5598 + param_1 * 4);
      }
      _DAT_01206a9c = &DAT_01206988 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_01206a88);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_012af1dc)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_012af1d8;
    }
  }
  else {
    if ((HBRUSH)(&DAT_012af08c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_012af08c)[param_1];
    }
    color_00 = _SfGetUIColorAbsolute_4(param_1);
    pHVar1 = CreateSolidBrush(color_00);
    (&DAT_012af08c)[param_1] = pHVar1;
    pHVar3 = DAT_012af1d8;
  }
  DAT_012af1d8 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_010fb37e:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


