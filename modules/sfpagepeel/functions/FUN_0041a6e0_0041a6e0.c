/* Module: sfpagepeel.dll
   Function: FUN_0041a6e0
   Address: 0041a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a6e0(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP pHVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  FUN_004344f0((undefined4 *)(param_1 + 0x3e0),0x1c,0xe,0xe,(uint *)0x0,0,(int *)0x0);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreateCompatibleDC(hdc);
  *(HDC *)(param_1 + 0x3d8) = pHVar1;
  ReleaseDC((HWND)0x0,hdc);
  pHVar2 = CreateDIBSection(*(HDC *)(param_1 + 0x3d8),(BITMAPINFO *)(param_1 + 0x3e0),0,
                            (void **)(param_1 + 0x40c),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x3dc) = pHVar2;
  if (pHVar2 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x3d8));
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(void **)(param_1 + 0x40c) = (void *)0x0;
    return 0;
  }
  return 1;
}


