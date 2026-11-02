/* Module: vegas30.exe
   Function: FUN_0048f4d0
   Address: 0048f4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f4d0(void)

{
  HDC hdc;
  HDC hdc_00;
  HBITMAP pHVar1;
  HGDIOBJ pvVar2;
  DWORD DVar3;
  tagRECT local_20;
  RECT local_10;
  
  local_20.top = 0;
  local_20.left = 0;
  local_20.bottom = 0xe;
  local_20.right = 0xe;
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  pHVar1 = CreateCompatibleBitmap(hdc,0xe,0xe);
  pvVar2 = SelectObject(hdc_00,pHVar1);
  DVar3 = GetSysColor(0xf);
  SetBkColor(hdc_00,DVar3);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0xe;
  local_10.bottom = 0xe;
  ExtTextOutA(hdc_00,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DrawFrameControl(hdc_00,&local_20,4,0x400);
  DAT_0063e390 = SelectObject(hdc_00,pvVar2);
  _DAT_0063e394 = 0xe;
  _DAT_0063e398 = 0xe;
  pHVar1 = CreateCompatibleBitmap(hdc,0xe,0xe);
  pvVar2 = SelectObject(hdc_00,pHVar1);
  DVar3 = GetSysColor(0xf);
  SetBkColor(hdc_00,DVar3);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0xe;
  local_10.bottom = 0xe;
  ExtTextOutA(hdc_00,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DrawFrameControl(hdc_00,&local_20,4,0);
  DAT_0063e3b8 = SelectObject(hdc_00,pvVar2);
  _DAT_0063e3bc = 0xe;
  _DAT_0063e3c0 = 0xe;
  ReleaseDC((HWND)0x0,hdc);
  DeleteDC(hdc_00);
  return;
}


