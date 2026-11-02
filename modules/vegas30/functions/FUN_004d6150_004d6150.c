/* Module: vegas30.exe
   Function: FUN_004d6150
   Address: 004d6150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d6150(int param_1,HDC param_2,tagRECT *param_3,int param_4)

{
  int y;
  int x;
  BOOL BVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar2;
  tagRECT local_10;
  
  if (param_3 != (RECT *)0x0) {
    BVar1 = IsRectEmpty(param_3);
    if (BVar1 == 0) goto LAB_004d617f;
  }
  GetClientRect(*(HWND *)(param_1 + 0x24),&local_10);
  param_3 = &local_10;
LAB_004d617f:
  if (param_4 != 0) {
    hdc = CreateCompatibleDC(param_2);
    if (hdc != (HDC)0x0) {
      h = CreateCompatibleBitmap(param_2,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
      if (h != (HBITMAP)0x0) {
        pvVar2 = SelectObject(hdc,h);
        FUN_004d6070(hdc,param_3);
        y = param_3->top;
        x = param_3->left;
        BitBlt(param_2,x,y,param_3->right - x,param_3->bottom - y,hdc,x,y,0xcc0020);
        pvVar2 = SelectObject(hdc,pvVar2);
        DeleteObject(pvVar2);
        DeleteDC(hdc);
        return;
      }
      DeleteDC(hdc);
    }
  }
  FUN_004d6070(param_2,param_3);
  return;
}


