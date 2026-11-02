/* Module: sfppack3.dll
   Function: FUN_5cc69630
   Address: 5cc69630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5cc69630(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5cc98a58;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5cc989f4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cc989f4)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cc989f4)[param_1] = pHVar2;
    pHVar4 = DAT_5cc98a58;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5cc98a58 != (HBRUSH)0x0) {
        return DAT_5cc98a58;
      }
      pHVar3 = (HBITMAP)FUN_5cc4d5d0(DAT_5cc98300,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5cc6973e;
      if (*(HBRUSH *)("DirectDrawEnumerateExA" + param_1 * 4 + 0x10) != (HBRUSH)0x0) {
        return *(HBRUSH *)("DirectDrawEnumerateExA" + param_1 * 4 + 0x10);
      }
      _DAT_5cc979bc = &DAT_5cc978a8 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5cc979a8);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5cc98a5c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5cc98a58;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5cc9890c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cc9890c)[param_1];
    }
    DVar1 = FUN_5cc69540(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cc9890c)[param_1] = pHVar2;
    pHVar4 = DAT_5cc98a58;
  }
  DAT_5cc98a58 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5cc6973e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


