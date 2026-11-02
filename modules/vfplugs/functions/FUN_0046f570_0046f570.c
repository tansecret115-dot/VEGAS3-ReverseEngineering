/* Module: vfplugs.dll
   Function: FUN_0046f570
   Address: 0046f570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0046f570(void *this,COLORREF param_1)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  int iVar1;
  
  if ((((*(int *)((int)this + 0x54) != 0) && (*(int *)((int)this + 0x58) != 0)) &&
      (hdc = GetDC(*(HWND *)((int)this + 0x10)), hdc != (HDC)0x0)) &&
     (hdc_00 = CreateCompatibleDC(hdc), hdc_00 != (HDC)0x0)) {
    h = SelectObject(hdc_00,*(HGDIOBJ *)((int)this + 0x54));
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x58)) {
      do {
        SetPixel(hdc_00,*(int *)(*(int *)((int)this + 0x5c) + iVar1 * 8),
                 *(int *)(*(int *)((int)this + 0x5c) + 4 + iVar1 * 8),param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0x58));
    }
    SelectObject(hdc_00,h);
    ReleaseDC(*(HWND *)((int)this + 0x10),hdc);
    DeleteDC(hdc_00);
    return 1;
  }
  return 0;
}


