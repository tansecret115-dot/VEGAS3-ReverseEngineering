/* Module: sfppack2.dll
   Function: FUN_5cd2cb10
   Address: 5cd2cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_5cd2cb10(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_5cd68358;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_5cd682f4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cd682f4)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cd682f4)[param_1] = pHVar2;
    pHVar4 = DAT_5cd68358;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_5cd68358 != (HBRUSH)0x0) {
        return DAT_5cd68358;
      }
      pHVar3 = (HBITMAP)FUN_5cd07090(DAT_5cd67a38,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_5cd2cc1e;
      if (*(HBRUSH *)(&DAT_5cd5e718 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_5cd5e718 + param_1 * 4);
      }
      _DAT_5cd63664 = &DAT_5cd63550 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_5cd63650);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_5cd6835c)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_5cd68358;
    }
  }
  else {
    if ((HBRUSH)(&DAT_5cd6820c)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_5cd6820c)[param_1];
    }
    DVar1 = FUN_5cd2ca20(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_5cd6820c)[param_1] = pHVar2;
    pHVar4 = DAT_5cd68358;
  }
  DAT_5cd68358 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_5cd2cc1e:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


