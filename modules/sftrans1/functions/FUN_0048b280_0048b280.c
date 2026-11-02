/* Module: sftrans1.dll
   Function: FUN_0048b280
   Address: 0048b280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048b280(int param_1,int param_2,int param_3)

{
  int iVar1;
  HFONT pHVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar3;
  int *piVar4;
  tagTEXTMETRICA local_38;
  
  if ((-1 < param_2) && (piVar4 = (int *)(param_1 + 0xac), param_2 < **(int **)(param_1 + 0xac) + 3)
     ) {
    if (param_2 < 3) {
      piVar4 = (int *)(param_1 + 0xa8);
    }
    iVar1 = FUN_00486990(param_2);
    if (-1 < iVar1) {
      iVar1 = *(int *)(*(int *)(*piVar4 + 8) + iVar1 * 4);
      pvVar3 = *(HGDIOBJ *)(iVar1 + 0x14);
      if (pvVar3 != (HGDIOBJ)0x0) {
        DeleteObject(pvVar3);
      }
      pHVar2 = CreateFontA(*(int *)(param_1 + 0x38) + -4,0,0,0,400,0,0,0,1,7,0,0,0,
                           (LPCSTR)(param_3 + 0x1c));
      hdc = GetDC(*(HWND *)(param_1 + 4));
      hdc_00 = CreateCompatibleDC(hdc);
      ReleaseDC(*(HWND *)(param_1 + 4),hdc);
      pvVar3 = SelectObject(hdc_00,pHVar2);
      GetTextMetricsA(hdc_00,&local_38);
      pvVar3 = SelectObject(hdc_00,pvVar3);
      DeleteObject(pvVar3);
      DeleteDC(hdc_00);
      pHVar2 = CreateFontA(-local_38.tmAscent,0,0,0,400,0,0,0,1,7,0,0,0,(LPCSTR)(param_3 + 0x1c));
      *(HFONT *)(iVar1 + 0x14) = pHVar2;
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
      return 1;
    }
  }
  return 0;
}


