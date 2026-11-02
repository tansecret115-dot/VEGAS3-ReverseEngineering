/* Module: vidcap30.exe
   Function: FUN_00509bb0
   Address: 00509bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00509bb0(HWND param_1,char *param_2)

{
  LONG LVar1;
  HINSTANCE hInstance;
  HBITMAP pHVar2;
  
  LVar1 = GetWindowLongA(param_1,4);
  if (*(HGDIOBJ *)(LVar1 + 4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(LVar1 + 4));
    *(undefined4 *)(LVar1 + 4) = 0;
  }
  if (*param_2 == '#') {
    param_2 = param_2 + 1;
    hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
    pHVar2 = LoadBitmapA(hInstance,param_2);
    *(HBITMAP *)(LVar1 + 4) = pHVar2;
  }
  InvalidateRect(param_1,(RECT *)0x0,1);
  return;
}


