/* Module: rmme3260.dll
   Function: FUN_66244460
   Address: 66244460
   Source: Ghidra pseudocode (Stage 10 batch) */


WORD * __thiscall FUN_66244460(void *this,WORD *param_1)

{
  RGBQUAD RVar1;
  void *pvVar2;
  HBITMAP hbm;
  LPBITMAPINFO lpbmi;
  int iVar3;
  undefined4 *puVar4;
  WORD *pWVar5;
  undefined1 local_2c;
  undefined4 local_2b;
  void *local_c;
  HBITMAP local_8;
  
  local_c = this;
  local_8 = CreateCompatibleBitmap(*(HDC *)((int)this + 0x48),1,1);
  lpbmi = operator_new(0x42c);
  local_2c = 0;
  puVar4 = &local_2b;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  hbm = local_8;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  pvVar2 = local_c;
  (lpbmi->bmiHeader).biSize = 0x28;
  (lpbmi->bmiHeader).biWidth = 0;
  (lpbmi->bmiHeader).biHeight = 0;
  (lpbmi->bmiHeader).biPlanes = 1;
  (lpbmi->bmiHeader).biBitCount = 0;
  (lpbmi->bmiHeader).biCompression = 0;
  (lpbmi->bmiHeader).biSizeImage = 0;
  (lpbmi->bmiHeader).biXPelsPerMeter = 0;
  (lpbmi->bmiHeader).biYPelsPerMeter = 0;
  (lpbmi->bmiHeader).biClrUsed = 0;
  (lpbmi->bmiHeader).biClrImportant = 0;
  GetDIBits(*(HDC *)((int)local_c + 0x48),hbm,0,1,(LPVOID)0x0,lpbmi,0);
  GetDIBits(*(HDC *)((int)pvVar2 + 0x48),local_8,0,1,&local_2c,lpbmi,0);
  if (param_1 != (WORD *)0x0) {
    *param_1 = (lpbmi->bmiHeader).biBitCount;
  }
  if ((lpbmi->bmiHeader).biBitCount == 0x10) {
    RVar1.rgbBlue = lpbmi->bmiColors[0].rgbBlue;
    RVar1.rgbGreen = lpbmi->bmiColors[0].rgbGreen;
    RVar1.rgbRed = lpbmi->bmiColors[0].rgbRed;
    RVar1.rgbReserved = lpbmi->bmiColors[0].rgbReserved;
    if (((RVar1 == (RGBQUAD)0x7c00) && (lpbmi[1].bmiHeader.biSize == 0x3e0)) &&
       (lpbmi[1].bmiHeader.biWidth == 0x1f)) {
      pWVar5 = (WORD *)0x52474235;
    }
    else if (((RVar1 != (RGBQUAD)0xf800) || (lpbmi[1].bmiHeader.biSize != 0x7e0)) ||
            (pWVar5 = (WORD *)0x52474236, lpbmi[1].bmiHeader.biWidth != 0x1f)) {
      pWVar5 = param_1;
    }
  }
  else {
    pWVar5 = (WORD *)0x52474233;
  }
  DeleteObject(local_8);
  operator_delete(lpbmi);
  return pWVar5;
}


