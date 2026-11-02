/* Module: sfpaplug.dll
   Function: FUN_004420a0
   Address: 004420a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_004420a0(uint param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  
  pHVar4 = DAT_00461140;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_004610dc)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_004610dc)[param_1];
    }
    DVar1 = GetSysColor(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_004610dc)[param_1] = pHVar2;
    pHVar4 = DAT_00461140;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_00461140 != (HBRUSH)0x0) {
        return DAT_00461140;
      }
      pHVar3 = (HBITMAP)FUN_00415de0(DAT_0045c380,(LPCSTR)0x65);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
        pHVar4 = pHVar2;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_004421ae;
      if (*(HBRUSH *)(&DAT_00457500 + param_1 * 4) != (HBRUSH)0x0) {
        return *(HBRUSH *)(&DAT_00457500 + param_1 * 4);
      }
      _DAT_0045be44 = &DAT_0045bd30 + (param_1 - 0x2711) * 0x10;
      pHVar3 = CreateBitmapIndirect((BITMAP *)&DAT_0045be30);
      pHVar2 = (HBRUSH)0x0;
      if (pHVar3 != (HBITMAP)0x0) {
        pHVar2 = CreatePatternBrush(pHVar3);
        DeleteObject(pHVar3);
      }
      (&DAT_00461144)[param_1 - 0x2711] = pHVar2;
      pHVar4 = DAT_00461140;
    }
  }
  else {
    if ((HBRUSH)(&DAT_00460ff4)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_00460ff4)[param_1];
    }
    DVar1 = FUN_00441fb0(param_1);
    pHVar2 = CreateSolidBrush(DVar1);
    (&DAT_00460ff4)[param_1] = pHVar2;
    pHVar4 = DAT_00461140;
  }
  DAT_00461140 = pHVar4;
  if (pHVar2 != (HBRUSH)0x0) {
    return pHVar2;
  }
LAB_004421ae:
  pHVar4 = GetStockObject(4);
  return pHVar4;
}


