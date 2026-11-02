/* Module: sfppack1.dll
   Function: FUN_5cdf3ca0
   Address: 5cdf3ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5cdf3ca0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5ce23f80;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5ce23f1c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5ce23f1c)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5ce23f1c)[param_1] = pHVar2;
    pHVar4 = DAT_5ce23f80;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5ce23f80 != (HBRUSH)0x0) {
        return DAT_5ce23f80;
      }
      pHVar3 = (HBITMAP)FUN_5cddbd80(DAT_5ce23828,&DAT_00000065);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5cdf3dae;
      if (*(HBRUSH *)("-0x%X" + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)("-0x%X" + param_1 * 4);
      }
      _DAT_5ce22edc = &DAT_5ce22dc8 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5ce22ec8);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5ce23f84)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5ce23f80;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5ce23e34)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5ce23e34)[param_1];
    }
    DVar1 = FUN_5cdf3bb0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5ce23e34)[param_1] = pHVar2;
    pHVar4 = DAT_5ce23f80;
  }
  DAT_5ce23f80 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5cdf3dae:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


