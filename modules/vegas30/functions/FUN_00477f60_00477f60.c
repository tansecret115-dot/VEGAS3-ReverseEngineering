/* Module: vegas30.exe
   Function: FUN_00477f60
   Address: 00477f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477f60(HWND param_1,undefined4 *param_2)

{
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HGDIOBJ pvVar1;
  DWORD color;
  RECT local_10;
  
  hdc = GetDC(param_1);
  hdc_00 = CreateCompatibleDC(hdc);
  if (hdc_00 == (HDC)0x0) {
    ReleaseDC(param_1,hdc);
    return;
  }
  h = CreateCompatibleBitmap(hdc,0x20,0x20);
  ReleaseDC(param_1,hdc);
  if (h == (HBITMAP)0x0) {
    DeleteDC(hdc_00);
    return;
  }
  param_2[2] = 0x20;
  *param_2 = hdc_00;
  param_2[3] = 0x20;
  pvVar1 = SelectObject(hdc_00,h);
  param_2[1] = pvVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  color = GetSysColor(0xf);
  SetBkColor(hdc_00,color);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0x20;
  local_10.bottom = 0x20;
  ExtTextOutA(hdc_00,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0x20;
  local_10.bottom = 0x20;
  FUN_00478050(hdc_00,&local_10);
  return;
}


