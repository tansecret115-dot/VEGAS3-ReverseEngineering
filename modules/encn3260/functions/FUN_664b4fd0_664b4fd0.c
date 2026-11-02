/* Module: encn3260.dll
   Function: FUN_664b4fd0
   Address: 664b4fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT FUN_664b4fd0(void)

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
    UVar5 = GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&DAT_664f08f0);
    ReleaseDC((HWND)0x0,hdc);
  }
  iVar2 = 0;
  if (0 < (int)UVar5) {
    puVar4 = &DAT_664f1113;
    puVar3 = &DAT_664f1110;
    do {
      uVar1 = (&DAT_664f08f2)[iVar2 * 4];
      (&DAT_664f0cf0)[iVar2] = iVar2;
      *puVar3 = uVar1;
      (&DAT_664f1111)[iVar2 * 4] = (&DAT_664f08f1)[iVar2 * 4];
      (&DAT_664f1112)[iVar2 * 4] = (&DAT_664f08f0)[iVar2 * 4];
      *puVar4 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (iVar2 < (int)UVar5);
  }
  windraw_SetRGB8Palette(UVar5,&DAT_664f08f0,&DAT_664f0cf0);
  DAT_664f1514 = UVar5;
  return UVar5;
}


