/* Module: rmme3260.dll
   Function: FUN_6624d3b0
   Address: 6624d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624d3b0(undefined4 *param_1)

{
  HDC hdc;
  HBITMAP hbm;
  int iVar1;
  LPBITMAPINFO lpbmi;
  LPBITMAPINFO ptVar2;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  hdc = GetDC((HWND)*param_1);
  if (hdc != (HDC)0x0) {
    hbm = CreateCompatibleBitmap(hdc,1,1);
    if (hbm != (HBITMAP)0x0) {
      lpbmi = (LPBITMAPINFO)(param_1 + 0x11e);
      ptVar2 = lpbmi;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        (ptVar2->bmiHeader).biSize = 0;
        ptVar2 = (LPBITMAPINFO)&(ptVar2->bmiHeader).biWidth;
      }
      (lpbmi->bmiHeader).biSize = 0x28;
      GetDIBits(hdc,hbm,0,1,(LPVOID)0x0,lpbmi,0);
      iVar1 = GetDIBits(hdc,hbm,0,1,(LPVOID)0x0,lpbmi,0);
      if (iVar1 != 0) {
        local_8 = 0;
      }
      DeleteObject(hbm);
    }
    ReleaseDC((HWND)*param_1,hdc);
  }
  return local_8;
}


