/* Module: encn3260.dll
   Function: FUN_664aee60
   Address: 664aee60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664aee60(void *this,int *param_1)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP h;
  HGDIOBJ pvVar2;
  
  hdc = GetDC((HWND)0x0);
  if (*(int *)((int)this + 0x50) == 0) {
    pHVar1 = CreateCompatibleDC(hdc);
    *(HDC *)((int)this + 0x50) = pHVar1;
  }
  if ((*(int *)((int)this + 100) != param_1[2] - *param_1) ||
     (*(int *)((int)this + 0x68) != param_1[3] - param_1[1])) {
    if (*(int *)((int)this + 0x58) != 0) {
      SelectObject(*(HDC *)((int)this + 0x50),*(HGDIOBJ *)((int)this + 0x54));
      DeleteObject(*(HGDIOBJ *)((int)this + 0x58));
    }
    h = CreateCompatibleBitmap(hdc,param_1[2] - *param_1,param_1[3] - param_1[1]);
    *(HBITMAP *)((int)this + 0x58) = h;
    pvVar2 = SelectObject(*(HDC *)((int)this + 0x50),h);
    *(HGDIOBJ *)((int)this + 0x54) = pvVar2;
    *(int *)((int)this + 100) = param_1[2] - *param_1;
    *(int *)((int)this + 0x68) = param_1[3] - param_1[1];
  }
  ReleaseDC((HWND)0x0,hdc);
  return;
}


