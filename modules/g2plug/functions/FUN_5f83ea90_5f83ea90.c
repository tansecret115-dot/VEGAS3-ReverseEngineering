/* Module: g2plug.dll
   Function: FUN_5f83ea90
   Address: 5f83ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5f83ea90(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5f8779e0;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5f87797c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5f87797c)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5f87797c)[param_1] = pHVar2;
    pHVar4 = DAT_5f8779e0;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5f8779e0 != (HBRUSH)0x0) {
        return DAT_5f8779e0;
      }
      pHVar3 = (HBITMAP)FUN_5f8173c0(DAT_5f877520,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5f83eb9e;
      if (*(HBRUSH *)("An error occurred while controlling the device." + param_1 * 4 + 0x18) !=
          (HBRUSH)0x0) {
        return *(HBRUSH *)("An error occurred while controlling the device." + param_1 * 4 + 0x18);
      }
      _DAT_5f876f04 = &DAT_5f876df0 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5f876ef0);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5f8779e4)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5f8779e0;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5f877894)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5f877894)[param_1];
    }
    DVar1 = FUN_5f83e9a0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5f877894)[param_1] = pHVar2;
    pHVar4 = DAT_5f8779e0;
  }
  DAT_5f8779e0 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5f83eb9e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


