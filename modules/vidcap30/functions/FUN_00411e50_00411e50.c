/* Module: vidcap30.exe
   Function: FUN_00411e50
   Address: 00411e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411e50(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,void *param_8,BITMAPINFO *param_9,UINT param_10,DWORD param_11)

{
  int cx;
  int cy;
  int iVar1;
  int x1;
  int iVar2;
  int x;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar3;
  int cy_00;
  int cx_00;
  
  cx = (param_9->bmiHeader).biWidth;
  cy = (param_9->bmiHeader).biHeight;
  if ((param_4 + param_6 <= cx) && (param_7 + param_5 <= cy)) {
    StretchDIBits(param_1,param_2,param_3,param_4,param_5,param_6,(cy - param_5) - param_7,param_4,
                  param_5,param_8,param_9,param_10,0xcc0020);
    return;
  }
  hdc = CreateCompatibleDC(param_1);
  h = CreateCompatibleBitmap(param_1,cx,cy);
  pvVar3 = SelectObject(hdc,h);
  StretchDIBits(hdc,0,0,cx,cy,0,0,cx,cy,param_8,param_9,param_10,0xcc0020);
  param_10 = param_7 % cy;
  if ((int)param_10 < 0) {
    param_10 = param_10 + cy;
  }
  param_6 = param_6 % cx;
  if (param_6 < 0) {
    param_6 = param_6 + cx;
  }
  param_7 = param_3;
  if (0 < param_5) {
    cy_00 = cy - param_10;
    do {
      iVar1 = cx - param_6;
      x1 = param_6;
      iVar2 = param_4;
      x = param_2;
      if (param_5 <= cy_00) {
        cy_00 = param_5;
      }
      for (; 0 < iVar2; iVar2 = iVar2 - cx_00) {
        cx_00 = iVar1;
        if (iVar2 <= iVar1) {
          cx_00 = iVar2;
        }
        BitBlt(param_1,x,param_7,cx_00,cy_00,hdc,x1,param_10,param_11);
        iVar1 = cx;
        x1 = 0;
        x = x + cx_00;
      }
      param_5 = param_5 - cy_00;
      param_7 = param_7 + cy_00;
      param_10 = 0;
      cy_00 = cy;
    } while (0 < param_5);
  }
  pvVar3 = SelectObject(hdc,pvVar3);
  DeleteObject(pvVar3);
  DeleteDC(hdc);
  return;
}


