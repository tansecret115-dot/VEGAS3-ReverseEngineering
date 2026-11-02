/* Module: vidpcore.dll
   Function: FUN_5deaa4a0
   Address: 5deaa4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deaa4a0(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP pHVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  FUN_5deca500((BITMAPINFO *)(param_1 + 0x3a4),0x1c,0xe,0xe,0,0,0);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreateCompatibleDC(hdc);
  *(HDC *)(param_1 + 0x39c) = pHVar1;
  ReleaseDC((HWND)0x0,hdc);
  pHVar2 = CreateDIBSection(*(HDC *)(param_1 + 0x39c),(BITMAPINFO *)(param_1 + 0x3a4),0,
                            (void **)(param_1 + 0x3d0),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x3a0) = pHVar2;
  if (pHVar2 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x39c));
    *(undefined4 *)(param_1 + 0x39c) = 0;
    *(void **)(param_1 + 0x3d0) = (void *)0x0;
    return 0;
  }
  return 1;
}


