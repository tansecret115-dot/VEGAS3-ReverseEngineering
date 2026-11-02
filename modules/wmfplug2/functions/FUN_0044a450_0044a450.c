/* Module: wmfplug2.dll
   Function: FUN_0044a450
   Address: 0044a450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_0044a450(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_0048ec00;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_0048eb9c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0048eb9c)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0048eb9c)[param_1] = pHVar2;
    pHVar4 = DAT_0048ec00;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_0048ec00 != (HBRUSH)0x0) {
        return DAT_0048ec00;
      }
      pHVar3 = (HBITMAP)FUN_0041fb80(DAT_00489e30,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_0044a55e;
      if (*(HBRUSH *)("SfTempEdit_PropPageSite" + param_1 * 4 + 0x14) != (HBRUSH)0x0) {
        return *(HBRUSH *)("SfTempEdit_PropPageSite" + param_1 * 4 + 0x14);
      }
      _DAT_00489a7c = &DAT_00489968 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_00489a68);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_0048ec04)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_0048ec00;
    }
  }
  else {
    if ((HBRUSH)(&DAT_0048eab4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0048eab4)[param_1];
    }
    DVar1 = FUN_0044a360(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0048eab4)[param_1] = pHVar2;
    pHVar4 = DAT_0048ec00;
  }
  DAT_0048ec00 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_0044a55e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


