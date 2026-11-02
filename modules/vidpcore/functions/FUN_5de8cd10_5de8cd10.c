/* Module: vidpcore.dll
   Function: FUN_5de8cd10
   Address: 5de8cd10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de8cd10(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP pHVar2;
  
  FUN_5de8cdb0();
  FUN_5deca500((BITMAPINFO *)(param_1 + 0x150),0x1c,*(undefined4 *)(param_1 + 0xcc),
               *(undefined4 *)(param_1 + 200),0,0,0);
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreateCompatibleDC(hdc);
  *(HDC *)(param_1 + 0x148) = pHVar1;
  ReleaseDC((HWND)0x0,hdc);
  pHVar2 = CreateDIBSection(*(HDC *)(param_1 + 0x148),(BITMAPINFO *)(param_1 + 0x150),0,
                            (void **)(param_1 + 0x17c),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x14c) = pHVar2;
  if (pHVar2 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(void **)(param_1 + 0x17c) = (void *)0x0;
  }
  return 0;
}


