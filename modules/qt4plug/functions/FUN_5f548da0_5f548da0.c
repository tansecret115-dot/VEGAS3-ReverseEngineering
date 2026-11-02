/* Module: qt4plug.dll
   Function: FUN_5f548da0
   Address: 5f548da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5f548da0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5f5a8f28;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5f5a8ec4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5f5a8ec4)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5f5a8ec4)[param_1] = pHVar2;
    pHVar4 = DAT_5f5a8f28;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5f5a8f28 != (HBRUSH)0x0) {
        return DAT_5f5a8f28;
      }
      pHVar3 = (HBITMAP)FUN_5f5276b0(DAT_5f5a4158,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5f548eae;
      if (*(HBRUSH *)("GetDlgItemInt" + param_1 * 4 + 6) != (HBRUSH)0x0) {
        return *(HBRUSH *)("GetDlgItemInt" + param_1 * 4 + 6);
      }
      _DAT_5f5a3cb4 = &DAT_5f5a3ba0 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5f5a3ca0);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5f5a8f2c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5f5a8f28;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5f5a8ddc)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5f5a8ddc)[param_1];
    }
    DVar1 = FUN_5f548cb0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5f5a8ddc)[param_1] = pHVar2;
    pHVar4 = DAT_5f5a8f28;
  }
  DAT_5f5a8f28 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5f548eae:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


