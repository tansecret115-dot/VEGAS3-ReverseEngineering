/* Module: vidcap30.exe
   Function: FUN_0043ecd0
   Address: 0043ecd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043ecd0(int param_1)

{
  LONG x;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ pvVar1;
  HDC pHVar2;
  tagRECT local_70;
  tagRECT local_60;
  int local_4c;
  int local_48;
  int local_44;
  tagPAINTSTRUCT local_40;
  
  hdc = BeginPaint(*(HWND *)(param_1 + 0xcc),&local_40);
  pvVar1 = (HGDIOBJ)0x0;
  hdc_00 = CreateCompatibleDC(hdc);
  x = local_40.rcPaint.left;
  if (hdc_00 != (HDC)0x0) {
    local_44 = local_40.rcPaint.bottom;
    local_48 = local_40.rcPaint.right;
    local_4c = local_40.rcPaint.top;
    h = CreateCompatibleBitmap
                  (hdc,local_40.rcPaint.right - local_40.rcPaint.left,
                   local_40.rcPaint.bottom - local_40.rcPaint.top);
    if (h == (HBITMAP)0x0) {
      DeleteDC(hdc_00);
      hdc_00 = (HDC)0x0;
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = SelectObject(hdc_00,h);
      SetWindowOrgEx(hdc_00,x,local_4c,(LPPOINT)0x0);
    }
  }
  GetClientRect(*(HWND *)(param_1 + 0xcc),&local_70);
  IntersectClipRect(hdc,local_70.left,local_70.top,local_70.right,local_70.bottom);
  pHVar2 = hdc;
  if (hdc_00 != (HDC)0x0) {
    pHVar2 = hdc_00;
  }
  FUN_00412310(pHVar2,&local_70,0,0x800);
  GetClipBox(hdc,&local_60);
  if (hdc_00 == (HDC)0x0) {
    FUN_0043eed0(param_1,hdc,&local_60);
  }
  else {
    IntersectClipRect(hdc_00,local_60.left,local_60.top,local_60.right,local_60.bottom);
    FUN_0043eed0(param_1,hdc_00,&local_60);
    SelectClipRgn(hdc_00,(HRGN)0x0);
  }
  SelectClipRgn(hdc,(HRGN)0x0);
  if (hdc_00 != (HDC)0x0) {
    BitBlt(hdc,local_40.rcPaint.left,local_40.rcPaint.top,
           local_40.rcPaint.right - local_40.rcPaint.left,
           local_40.rcPaint.bottom - local_40.rcPaint.top,hdc_00,local_40.rcPaint.left,
           local_40.rcPaint.top,0xcc0020);
    pvVar1 = SelectObject(hdc_00,pvVar1);
    DeleteObject(pvVar1);
    DeleteDC(hdc_00);
  }
  EndPaint(*(HWND *)(param_1 + 0xcc),&local_40);
  return;
}


