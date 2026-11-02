/* Module: mcplug.dll
   Function: FUN_004393d0
   Address: 004393d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_004393d0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_0048cca8;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_0048cc44)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0048cc44)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0048cc44)[param_1] = pHVar2;
    pHVar4 = DAT_0048cca8;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_0048cca8 != (HBRUSH)0x0) {
        return DAT_0048cca8;
      }
      pHVar3 = (HBITMAP)FUN_00419090(DAT_00487ed8,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_004394de;
      if (*(HBRUSH *)(&DAT_00483068 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_00483068 + param_1 * 4);
      }
      _DAT_004876e4 = &DAT_004875d0 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_004876d0);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_0048ccac)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_0048cca8;
    }
  }
  else {
    if ((HBRUSH)(&DAT_0048cb5c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0048cb5c)[param_1];
    }
    DVar1 = FUN_004392e0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0048cb5c)[param_1] = pHVar2;
    pHVar4 = DAT_0048cca8;
  }
  DAT_0048cca8 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_004394de:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


