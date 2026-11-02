/* Module: sftrkfx1.dll
   Function: FUN_5cbab940
   Address: 5cbab940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbab940(undefined4 *param_1)

{
  HDC hdc;
  HFONT__ *pHVar1;
  HGDIOBJ h;
  uchar *puVar2;
  
  hdc = GetDC((HWND)*param_1);
  pHVar1 = GetWingdingsFont();
  param_1[0x1021] = pHVar1;
  if ((hdc != (HDC)0x0) && (pHVar1 != (HFONT__ *)0x0)) {
    h = GetCurrentObject(hdc,6);
    SelectObject(hdc,(HGDIOBJ)param_1[0x1021]);
    puVar2 = (uchar *)(param_1 + 0x1024);
    do {
      FUN_5cbbf190(puVar2,"%c");
      FUN_5cbbf190(puVar2 + 7,"%c");
      puVar2 = puVar2 + 1;
    } while (puVar2 + (-0x4090 - (int)param_1) < (uchar *)0x6);
    FUN_5cbbf190((uchar *)((int)param_1 + 0x409e),"%c");
    FUN_5cbbf190((uchar *)((int)param_1 + 0x409f),"%c");
    GetTextExtentPoint32A(hdc,(LPCSTR)(param_1 + 0x1024),1,(LPSIZE)(param_1 + 0x1022));
    SelectObject(hdc,h);
    ReleaseDC((HWND)*param_1,hdc);
    return 1;
  }
  return 0;
}


