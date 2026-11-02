/* Module: encn3260.dll
   Function: FUN_664b7870
   Address: 664b7870
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT FUN_664b7870(void)

{
  HDC hdc;
  int iVar1;
  int *piVar2;
  UINT UVar3;
  
  UVar3 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    UVar3 = GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&DAT_664f1530);
    ReleaseDC((HWND)0x0,hdc);
  }
  if (UVar3 != 0) {
    iVar1 = 0;
    if (0 < (int)UVar3) {
      piVar2 = &DAT_664f1930;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < (int)UVar3);
    }
    windraw_SetRGB8Palette(UVar3,&DAT_664f1530,&DAT_664f1930);
    DAT_664f1d4c = UVar3;
  }
  return UVar3;
}


