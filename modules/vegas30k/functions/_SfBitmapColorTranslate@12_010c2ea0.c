/* Module: vegas30k.dll
   Function: _SfBitmapColorTranslate@12
   Address: 010c2ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfBitmapColorTranslate_12(HDC param_1,int param_2,COLORREF param_3)

{
  COLORREF CVar1;
  HBITMAP h;
  HDC hdc;
  HGDIOBJ pvVar2;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  
                    /* 0xc2ea0  779  _SfBitmapColorTranslate@12 */
  if ((*(short *)(param_2 + 0x10) != 1) || (*(short *)(param_2 + 0x12) != 1)) {
    CVar1 = GetPixel(param_1,0,0);
    if (CVar1 != param_3) {
      h = CreateBitmap(*(int *)(param_2 + 4),*(int *)(param_2 + 8),1,1,(void *)0x0);
      if (h == (HBITMAP)0x0) {
        return 0;
      }
      hdc = CreateCompatibleDC(param_1);
      pvVar2 = SelectObject(hdc,h);
      h_00 = CreateSolidBrush(param_3);
      pvVar3 = SelectObject(param_1,h_00);
      CVar1 = GetPixel(param_1,0,0);
      SetBkColor(param_1,CVar1);
      BitBlt(hdc,0,0,*(int *)(param_2 + 4),*(int *)(param_2 + 8),param_1,0,0,0xcc0020);
      SetBkColor(param_1,0xffffff);
      SetTextColor(param_1,0);
      BitBlt(param_1,0,0,*(int *)(param_2 + 4),*(int *)(param_2 + 8),hdc,0,0,0xe20746);
      pvVar3 = SelectObject(param_1,pvVar3);
      DeleteObject(pvVar3);
      pvVar2 = SelectObject(hdc,pvVar2);
      DeleteObject(pvVar2);
      DeleteDC(hdc);
      return 1;
    }
  }
  return 1;
}


