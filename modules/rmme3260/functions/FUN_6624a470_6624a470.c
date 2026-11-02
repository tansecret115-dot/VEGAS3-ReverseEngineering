/* Module: rmme3260.dll
   Function: FUN_6624a470
   Address: 6624a470
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT FUN_6624a470(void)

{
  undefined1 uVar1;
  HDC hdc;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  UINT UVar5;
  
  UVar5 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    UVar5 = GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&DAT_6627d0f8);
    ReleaseDC((HWND)0x0,hdc);
  }
  iVar2 = 0;
  if (0 < (int)UVar5) {
    puVar4 = &DAT_6627d91b;
    puVar3 = &DAT_6627d918;
    do {
      uVar1 = (&DAT_6627d0fa)[iVar2 * 4];
      (&DAT_6627d4f8)[iVar2] = iVar2;
      *puVar3 = uVar1;
      (&DAT_6627d919)[iVar2 * 4] = (&DAT_6627d0f9)[iVar2 * 4];
      (&DAT_6627d91a)[iVar2 * 4] = (&DAT_6627d0f8)[iVar2 * 4];
      *puVar4 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (iVar2 < (int)UVar5);
  }
  windraw_SetRGB8Palette(UVar5,&DAT_6627d0f8,&DAT_6627d4f8);
  DAT_6627dd1c = UVar5;
  return UVar5;
}


