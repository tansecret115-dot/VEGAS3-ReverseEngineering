/* Module: vidcap30.exe
   Function: _SfCreateBitmapMask@12
   Address: 0047ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


HGDIOBJ _SfCreateBitmapMask_12(HDC param_1,HANDLE param_2,COLORREF param_3)

{
  int cx;
  int cy;
  HDC hdc;
  HBITMAP h;
  HDC hdc_00;
  HGDIOBJ h_00;
  HDC hdc_01;
  HBITMAP h_01;
  HGDIOBJ pvVar1;
  COLORREF color;
  COLORREF color_00;
  bool bVar2;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
                    /* 0x7ed60  271  _SfCreateBitmapMask@12 */
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  hdc = CreateCompatibleDC(param_1);
  SelectObject(hdc,param_2);
  GetObjectA(param_2,0x18,local_18);
  cy = local_10;
  cx = local_14;
  h = CreateCompatibleBitmap(param_1,local_14,local_10);
  hdc_00 = CreateCompatibleDC(param_1);
  h_00 = SelectObject(hdc_00,h);
  BitBlt(hdc_00,0,0,local_14,local_10,hdc,0,0,0xcc0020);
  hdc_01 = CreateCompatibleDC(param_1);
  h_01 = CreateBitmap(local_14,local_10,1,1,(void *)0x0);
  pvVar1 = SelectObject(hdc_01,h_01);
  SetBkColor(hdc_00,param_3);
  BitBlt(hdc_01,0,0,local_14,local_10,hdc_00,0,0,0xcc0020);
  SetBkColor(hdc_00,0);
  SetTextColor(hdc_00,0xffffff);
  BitBlt(hdc_00,0,0,local_14,local_10,hdc_01,0,0,0x8800c6);
  pvVar1 = SelectObject(hdc_01,pvVar1);
  SelectObject(hdc_00,pvVar1);
  color = SetTextColor(hdc,0);
  color_00 = SetBkColor(hdc,0xffffff);
  BitBlt(hdc,0,0,cx,cy,hdc_00,0,0,0x8800c6);
  SetBkColor(hdc,color_00);
  SetTextColor(hdc,color);
  SelectObject(hdc_00,h);
  BitBlt(hdc,0,0,cx,cy,hdc_00,0,0,0xcc0020);
  DeleteDC(hdc_01);
  SelectObject(hdc_00,h_00);
  DeleteDC(hdc_00);
  DeleteObject(h);
  SelectObject(hdc,(HGDIOBJ)0x0);
  DeleteDC(hdc);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return pvVar1;
}


