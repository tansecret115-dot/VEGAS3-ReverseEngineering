/* Module: sfxpfx2.dll
   Function: FUN_5c8bf800
   Address: 5c8bf800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5c8bf800(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5c8e9b50;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5c8e9aec)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5c8e9aec)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5c8e9aec)[param_1] = pHVar2;
    pHVar4 = DAT_5c8e9b50;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5c8e9b50 != (HBRUSH)0x0) {
        return DAT_5c8e9b50;
      }
      pHVar3 = (HBITMAP)FUN_5c8a7000(DAT_5c8e93f8,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5c8bf90e;
      if (*(HBRUSH *)("The %s device %s could not allocate memory." + param_1 * 4 + 0x10) !=
          (HBRUSH)0x0) {
        return *(HBRUSH *)("The %s device %s could not allocate memory." + param_1 * 4 + 0x10);
      }
      _DAT_5c8e8a84 = &DAT_5c8e8970 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5c8e8a70);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5c8e9b54)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5c8e9b50;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5c8e9a04)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5c8e9a04)[param_1];
    }
    DVar1 = FUN_5c8bf710(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5c8e9a04)[param_1] = pHVar2;
    pHVar4 = DAT_5c8e9b50;
  }
  DAT_5c8e9b50 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5c8bf90e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


