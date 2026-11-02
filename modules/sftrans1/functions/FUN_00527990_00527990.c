/* Module: sftrans1.dll
   Function: FUN_00527990
   Address: 00527990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00527990(int param_1,COLORREF param_2)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
      (hdc = GetDC(*(HWND *)(param_1 + 0x10)), hdc != (HDC)0x0)) &&
     (hdc_00 = CreateCompatibleDC(hdc), hdc_00 != (HDC)0x0)) {
    h = SelectObject(hdc_00,*(HGDIOBJ *)(param_1 + 0x54));
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        SetPixel(hdc_00,*(int *)(*(int *)(param_1 + 0x5c) + iVar1 * 8),
                 *(int *)(*(int *)(param_1 + 0x5c) + 4 + iVar1 * 8),param_2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x58));
    }
    SelectObject(hdc_00,h);
    ReleaseDC(*(HWND *)(param_1 + 0x10),hdc);
    DeleteDC(hdc_00);
    return 1;
  }
  return 0;
}


