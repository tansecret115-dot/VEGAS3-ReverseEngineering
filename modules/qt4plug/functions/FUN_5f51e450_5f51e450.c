/* Module: qt4plug.dll
   Function: FUN_5f51e450
   Address: 5f51e450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f51e450(int param_1)

{
  short sVar1;
  HDC hdc;
  HDC pHVar2;
  HBITMAP pHVar3;
  
  sVar1 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    return -0x7fff0001;
  }
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateCompatibleDC(hdc);
  *(HDC *)(param_1 + 0x4c) = pHVar2;
  ReleaseDC((HWND)0x0,hdc);
  if (*(HDC *)(param_1 + 0x4c) != (HDC)0x0) {
    pHVar3 = CreateDIBSection(*(HDC *)(param_1 + 0x4c),*(BITMAPINFO **)(param_1 + 0x44),0,
                              (void **)(param_1 + 0x48),(HANDLE)0x0,0);
    *(HBITMAP *)(param_1 + 0x50) = pHVar3;
    if (pHVar3 != (HBITMAP)0x0) {
      sVar1 = FUN_5f579430();
      if (sVar1 == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x44) + 4) * -4;
        return 0;
      }
    }
  }
  if (*(HGDIOBJ *)(param_1 + 0x50) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(HDC *)(param_1 + 0x4c) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_5f57c110();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return (int)sVar1;
}


