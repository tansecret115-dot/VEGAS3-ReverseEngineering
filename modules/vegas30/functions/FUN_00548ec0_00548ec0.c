/* Module: vegas30.exe
   Function: FUN_00548ec0
   Address: 00548ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00548ec0(BITMAPINFO *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HDC hdc;
  HDC pHVar1;
  HBITMAP pHVar2;
  int iVar3;
  BITMAPINFO *pBVar4;
  
  pBVar4 = param_1;
  for (iVar3 = 0x10d; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pBVar4->bmiHeader).biSize = 0;
    pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
  }
  iVar3 = -0x7ff8fff2;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    pHVar1 = CreateCompatibleDC(hdc);
    *(HDC *)&param_1[0x18].bmiHeader.biPlanes = pHVar1;
    if (pHVar1 != (HDC)0x0) {
      iVar3 = _SfVideo_InitBitmapInfo_28(param_1,param_4,param_2,param_3,0,0,0);
      if (-1 < iVar3) {
        pHVar2 = CreateDIBSection(*(HDC *)&param_1[0x18].bmiHeader.biPlanes,param_1,0,
                                  (void **)&param_1[0x18].bmiHeader.biCompression,(HANDLE)0x0,0);
        param_1[0x18].bmiHeader.biHeight = (LONG)pHVar2;
        if (pHVar2 != (HBITMAP)0x0) {
          iVar3 = 0;
        }
      }
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return iVar3;
}


