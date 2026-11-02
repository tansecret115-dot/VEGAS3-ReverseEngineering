/* Module: vegas30.exe
   Function: FUN_00520070
   Address: 00520070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00520070(int param_1,HDC param_2)

{
  HWND hWnd;
  int iVar1;
  LONG LVar2;
  HDC hdc;
  HGDIOBJ h;
  HBITMAP h_00;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  hWnd = *(HWND *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xa8);
  h_00 = (HBITMAP)0x0;
  local_40.hdc = (HDC)0x0;
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint(hWnd,&local_40);
  }
  GetClientRect(hWnd,&local_50);
  LVar2 = GetWindowLongA(hWnd,-0x10);
  if (iVar1 << 0x1e < 0) {
    hdc = CreateCompatibleDC(param_2);
    h_00 = CreateCompatibleBitmap(param_2,local_50.right,local_50.bottom);
    if ((hdc != (HDC)0x0) && (h_00 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,h_00);
      FUN_0051fd20(param_1,hdc,&local_50,LVar2);
      BitBlt(param_2,0,0,local_50.right,local_50.bottom,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_00520104;
    }
  }
  else {
    hdc = (HDC)0x0;
  }
  FUN_0051fd20(param_1,param_2,&local_50,LVar2);
LAB_00520104:
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (local_40.hdc != (HDC)0x0) {
    EndPaint(hWnd,&local_40);
  }
  return;
}


