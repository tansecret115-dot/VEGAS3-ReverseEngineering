/* Module: vegas30k.dll
   Function: FUN_01039370
   Address: 01039370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01039370(undefined4 param_1,HWND param_2,HDC param_3)

{
  LONG LVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  if (param_3 == (HDC)0x0) {
    param_3 = BeginPaint(param_2,&local_40);
  }
  else {
    local_40.hdc = (HDC)0x0;
    local_40.fErase = 1;
  }
  GetClientRect(param_2,&local_50);
  LVar1 = GetWindowLongA(param_2,-0x10);
  hdc = CreateCompatibleDC(param_3);
  h = CreateCompatibleBitmap(param_3,local_50.right,local_50.bottom);
  if ((hdc == (HDC)0x0) || (h == (HBITMAP)0x0)) {
    FUN_01039030(param_1,param_2,param_3,&local_50,LVar1);
  }
  else {
    h_00 = SelectObject(hdc,h);
    FUN_01039030(param_1,param_2,hdc,&local_50,LVar1);
    BitBlt(param_3,0,0,local_50.right,local_50.bottom,hdc,0,0,0xcc0020);
    SelectObject(hdc,h_00);
  }
  if (h != (HBITMAP)0x0) {
    DeleteObject(h);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (local_40.hdc != (HDC)0x0) {
    EndPaint(param_2,&local_40);
  }
  return;
}


