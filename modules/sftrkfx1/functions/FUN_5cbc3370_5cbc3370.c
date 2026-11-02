/* Module: sftrkfx1.dll
   Function: FUN_5cbc3370
   Address: 5cbc3370
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cbc3370(HWND param_1,HINSTANCE param_2,LPCSTR param_3)

{
  LONG LVar1;
  HBITMAP pHVar2;
  
  LVar1 = GetWindowLongA(param_1,4);
  if (*(HGDIOBJ *)(LVar1 + 4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(LVar1 + 4));
    *(undefined4 *)(LVar1 + 4) = 0;
  }
  if (param_2 == (HINSTANCE)0x0) {
    param_2 = (HINSTANCE)GetWindowLongA(param_1,-6);
  }
  pHVar2 = LoadBitmapA(param_2,param_3);
  *(HBITMAP *)(LVar1 + 4) = pHVar2;
  InvalidateRect(param_1,(RECT *)0x0,1);
  return *(int *)(LVar1 + 4) != 0;
}


