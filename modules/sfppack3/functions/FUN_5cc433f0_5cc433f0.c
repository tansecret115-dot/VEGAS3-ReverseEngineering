/* Module: sfppack3.dll
   Function: FUN_5cc433f0
   Address: 5cc433f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc433f0(void *this,int param_1,uint param_2)

{
  HWND hWnd;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  COLORREF color;
  HPEN h_00;
  HGDIOBJ pvVar1;
  int cx;
  HDC unaff_EDI;
  int cy;
  uint uVar2;
  code *pcVar3;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x14),0x138a);
  hdc = GetDC(hWnd);
  hdc_00 = CreateCompatibleDC(hdc);
  GetWindowRect(hWnd,&local_10);
  cy = local_10.bottom - local_10.top;
  cx = local_10.right - local_10.left;
  h = CreateCompatibleBitmap(hdc,cx,cy);
  SelectObject(hdc_00,h);
  PatBlt(hdc_00,0,0,cx,cy,0xff0062);
  color = FUN_5cc695c0(0x6b);
  h_00 = CreatePen(0,1,color);
  pcVar3 = SelectObject_exref;
  pvVar1 = SelectObject(hdc_00,h_00);
  if ((param_1 != 0) && (uVar2 = 0, pcVar3 = SelectObject_exref, param_2 != 0)) {
    do {
      FUN_5cc43360(*(int *)(param_1 + uVar2 * 8),*(int *)(param_1 + 4 + uVar2 * 8),&local_18,
                   local_10.left,local_10.top,local_10.right,local_10.bottom);
      if (uVar2 == 0) {
        MoveToEx(hdc_00,local_18,local_14,(LPPOINT)0x0);
      }
      else {
        LineTo(hdc_00,local_18,local_14);
      }
      uVar2 = uVar2 + 1;
      pcVar3 = SelectObject_exref;
    } while (uVar2 < param_2);
  }
  SendMessageA(hWnd,0x60e,0,(LPARAM)h);
  pvVar1 = (HGDIOBJ)(*pcVar3)(hdc_00,pvVar1);
  DeleteObject(pvVar1);
  (*pcVar3)(hdc_00,h);
  DeleteDC(hdc_00);
  ReleaseDC((HWND)hdc[5].unused,unaff_EDI);
  return;
}


