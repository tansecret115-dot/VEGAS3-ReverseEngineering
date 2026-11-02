/* Module: sfcdi.dll
   Function: FUN_5bf37130
   Address: 5bf37130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5bf37130(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5bf76788;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5bf76724)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5bf76724)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5bf76724)[param_1] = pHVar2;
    pHVar4 = DAT_5bf76788;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5bf76788 != (HBRUSH)0x0) {
        return DAT_5bf76788;
      }
      pHVar3 = (HBITMAP)FUN_5bf28000(DAT_5bf76078,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5bf3723e;
      if (*(HBRUSH *)(&DAT_5bf6cb48 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_5bf6cb48 + param_1 * 4);
      }
      _DAT_5bf65a5c = &DAT_5bf65948 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5bf65a48);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5bf7678c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5bf76788;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5bf7663c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5bf7663c)[param_1];
    }
    DVar1 = FUN_5bf37040(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5bf7663c)[param_1] = pHVar2;
    pHVar4 = DAT_5bf76788;
  }
  DAT_5bf76788 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5bf3723e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


