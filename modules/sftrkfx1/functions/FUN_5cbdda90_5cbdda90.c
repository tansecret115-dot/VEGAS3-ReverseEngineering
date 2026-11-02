/* Module: sftrkfx1.dll
   Function: FUN_5cbdda90
   Address: 5cbdda90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5cbdda90(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5cc11c58;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5cc11bf4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cc11bf4)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cc11bf4)[param_1] = pHVar2;
    pHVar4 = DAT_5cc11c58;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5cc11c58 != (HBRUSH)0x0) {
        return DAT_5cc11c58;
      }
      pHVar3 = (HBITMAP)FUN_5cbd5790(DAT_5cc114f8,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5cbddb9e;
      if (*(HBRUSH *)("No regions to display" + param_1 * 4 + 0x14) != (HBRUSH)0x0) {
        return *(HBRUSH *)("No regions to display" + param_1 * 4 + 0x14);
      }
      _DAT_5cc10f3c = &DAT_5cc10e28 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5cc10f28);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5cc11c5c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5cc11c58;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5cc11b0c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cc11b0c)[param_1];
    }
    DVar1 = FUN_5cbdd9a0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cc11b0c)[param_1] = pHVar2;
    pHVar4 = DAT_5cc11c58;
  }
  DAT_5cc11c58 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5cbddb9e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


