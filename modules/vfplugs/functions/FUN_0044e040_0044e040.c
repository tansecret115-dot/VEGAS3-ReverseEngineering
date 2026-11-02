/* Module: vfplugs.dll
   Function: FUN_0044e040
   Address: 0044e040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_0044e040(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_00535198;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_00535134)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_00535134)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_00535134)[param_1] = pHVar2;
    pHVar4 = DAT_00535198;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_00535198 != (HBRUSH)0x0) {
        return DAT_00535198;
      }
      pHVar3 = (HBITMAP)FUN_0042c8f0(DAT_00494a78,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_0044e14e;
      if (*(HBRUSH *)(&DAT_0052b558 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_0052b558 + param_1 * 4);
      }
      _DAT_0049404c = &DAT_00493f38 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_00494038);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_0053519c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_00535198;
    }
  }
  else {
    if ((HBRUSH)(&DAT_0053504c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0053504c)[param_1];
    }
    DVar1 = FUN_0044df50(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0053504c)[param_1] = pHVar2;
    pHVar4 = DAT_00535198;
  }
  DAT_00535198 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_0044e14e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


