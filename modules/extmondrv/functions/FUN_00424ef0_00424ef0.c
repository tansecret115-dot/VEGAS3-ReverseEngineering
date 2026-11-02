/* Module: extmondrv.dll
   Function: FUN_00424ef0
   Address: 00424ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_00424ef0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_0045b840;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_0045b7dc)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0045b7dc)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0045b7dc)[param_1] = pHVar2;
    pHVar4 = DAT_0045b840;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_0045b840 != (HBRUSH)0x0) {
        return DAT_0045b840;
      }
      pHVar3 = (HBITMAP)FUN_00411c70(DAT_0045b190,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_00424ffe;
      if (*(HBRUSH *)("Delete Confirmation" + param_1 * 4 + 8) != (HBRUSH)0x0) {
        return *(HBRUSH *)("Delete Confirmation" + param_1 * 4 + 8);
      }
      _DAT_0045ac54 = &DAT_0045ab40 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_0045ac40);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_0045b844)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_0045b840;
    }
  }
  else {
    if ((HBRUSH)(&DAT_0045b6f4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0045b6f4)[param_1];
    }
    DVar1 = FUN_00424e00(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_0045b6f4)[param_1] = pHVar2;
    pHVar4 = DAT_0045b840;
  }
  DAT_0045b840 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_00424ffe:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


