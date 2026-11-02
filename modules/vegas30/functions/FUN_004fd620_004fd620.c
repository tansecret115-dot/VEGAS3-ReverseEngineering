/* Module: vegas30.exe
   Function: FUN_004fd620
   Address: 004fd620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fd620(undefined4 param_1,HDC param_2,tagRECT *param_3,int param_4)

{
  int y;
  int x;
  BOOL BVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar2;
  uint x_00;
  uint y_00;
  tagRECT local_10;
  
  if (param_3 != (RECT *)0x0) {
    BVar1 = IsRectEmpty(param_3);
    if (BVar1 == 0) goto LAB_004fd64e;
  }
  GetClipBox(param_2,&local_10);
  param_3 = &local_10;
LAB_004fd64e:
  if (param_4 != 0) {
    hdc = CreateCompatibleDC(param_2);
    if (hdc != (HDC)0x0) {
      x_00 = param_3->left & 0xfffffff8;
      y_00 = param_3->top & 0xfffffff8;
      h = CreateCompatibleBitmap(param_2,param_3->right - x_00,param_3->bottom - y_00);
      if (h != (HBITMAP)0x0) {
        pvVar2 = SelectObject(hdc,h);
        SetWindowOrgEx(hdc,x_00,y_00,(LPPOINT)0x0);
        FUN_004fd430(param_1,hdc,param_3);
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
  FUN_004fd430(param_1,param_2,param_3);
  return;
}


