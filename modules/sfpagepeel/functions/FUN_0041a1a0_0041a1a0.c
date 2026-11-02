/* Module: sfpagepeel.dll
   Function: FUN_0041a1a0
   Address: 0041a1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a1a0(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP pHVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x35c) = 0;
  FUN_004344f0((undefined4 *)(param_1 + 0x32c),0x1c,
               *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1b8),
               *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc),(uint *)0x0,0,(int *)0x0);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreateCompatibleDC(hdc);
  *(HDC *)(param_1 + 0x324) = pHVar1;
  ReleaseDC((HWND)0x0,hdc);
  pHVar2 = CreateDIBSection(*(HDC *)(param_1 + 0x324),(BITMAPINFO *)(param_1 + 0x32c),0,
                            (void **)(param_1 + 0x358),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x328) = pHVar2;
  if (pHVar2 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x324));
    *(undefined4 *)(param_1 + 0x324) = 0;
    *(void **)(param_1 + 0x358) = (void *)0x0;
    return 0;
  }
  return 1;
}


