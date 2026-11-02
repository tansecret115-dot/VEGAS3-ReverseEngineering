/* Module: sfpagepeel.dll
   Function: FUN_004301c0
   Address: 004301c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBRUSH FUN_004301c0(uint param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  undefined *color_00;
  HBITMAP pHVar2;
  HBRUSH pHVar3;
  
  pHVar3 = DAT_0047e0f8;
  if (param_1 < 0x19) {
    if ((HBRUSH)(&DAT_0047e094)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0047e094)[param_1];
    }
    color = GetSysColor(param_1);
    pHVar1 = CreateSolidBrush(color);
    (&DAT_0047e094)[param_1] = pHVar1;
    pHVar3 = DAT_0047e0f8;
  }
  else if (((int)param_1 < 100) || (0x9e < (int)param_1)) {
    if (param_1 == 10000) {
      if (DAT_0047e0f8 != (HBRUSH)0x0) {
        return DAT_0047e0f8;
      }
      pHVar2 = (HBITMAP)FUN_004278d0(DAT_0047d9f0,(LPCSTR)0x65);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
        pHVar3 = pHVar1;
      }
    }
    else {
      if (((int)param_1 < 0x2711) || (0x2720 < (int)param_1)) goto LAB_004302ce;
      if (*(HBRUSH *)
           (
           "The Plug-in \'%s\' failed to load.  Please make sure the plug-in is properly installed."
           + param_1 * 4 + 0x30) != (HBRUSH)0x0) {
        return *(HBRUSH *)
                (
                "The Plug-in \'%s\' failed to load.  Please make sure the plug-in is properly installed."
                + param_1 * 4 + 0x30);
      }
      _DAT_0047cfcc = &DAT_0047ceb8 + (param_1 - 0x2711) * 0x10;
      pHVar2 = CreateBitmapIndirect((BITMAP *)&DAT_0047cfb8);
      pHVar1 = (HBRUSH)0x0;
      if (pHVar2 != (HBITMAP)0x0) {
        pHVar1 = CreatePatternBrush(pHVar2);
        DeleteObject(pHVar2);
      }
      (&DAT_0047e0fc)[param_1 - 0x2711] = pHVar1;
      pHVar3 = DAT_0047e0f8;
    }
  }
  else {
    if ((HBRUSH)(&DAT_0047dfac)[param_1] != (HBRUSH)0x0) {
      return (HBRUSH)(&DAT_0047dfac)[param_1];
    }
    color_00 = FUN_004300d0(param_1);
    pHVar1 = CreateSolidBrush((COLORREF)color_00);
    (&DAT_0047dfac)[param_1] = pHVar1;
    pHVar3 = DAT_0047e0f8;
  }
  DAT_0047e0f8 = pHVar3;
  if (pHVar1 != (HBRUSH)0x0) {
    return pHVar1;
  }
LAB_004302ce:
  pHVar3 = GetStockObject(4);
  return pHVar3;
}


