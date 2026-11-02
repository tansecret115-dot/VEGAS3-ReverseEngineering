/* Module: sftrkfx1.dll
   Function: FUN_5cba9620
   Address: 5cba9620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba9620(undefined4 *param_1)

{
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ pvVar1;
  RECT local_10;
  
  hdc = GetDC((HWND)*param_1);
  hdc_00 = CreateCompatibleDC(hdc);
  if (hdc_00 == (HDC)0x0) {
    ReleaseDC((HWND)*param_1,hdc);
    return;
  }
  h = CreateCompatibleBitmap(hdc,8,0x20);
  ReleaseDC((HWND)*param_1,hdc);
  if (h == (HBITMAP)0x0) {
    DeleteDC(hdc_00);
    return;
  }
  param_1[0xc] = 8;
  param_1[10] = hdc_00;
  param_1[0xd] = 0x20;
  pvVar1 = SelectObject(hdc_00,h);
  param_1[0xb] = pvVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  SetBkColor(hdc_00,0xffffff);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 8;
  local_10.bottom = 0x20;
  ExtTextOutA(hdc_00,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 8;
  local_10.bottom = 0x20;
  FUN_5cba9420(hdc_00,&local_10.left);
  return;
}


