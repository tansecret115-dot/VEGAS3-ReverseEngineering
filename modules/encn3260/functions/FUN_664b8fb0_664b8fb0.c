/* Module: encn3260.dll
   Function: FUN_664b8fb0
   Address: 664b8fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_664b8fb0(undefined4 *param_1,BITMAPINFO *param_2,void *param_3,int *param_4,int *param_5)

{
  UINT cLines;
  HDC hdc;
  DWORD h;
  DWORD SrcWidth;
  DWORD SrcHeight;
  int iVar1;
  DWORD w;
  uint uVar2;
  
  uVar2 = 0;
  hdc = GetDC((HWND)*param_1);
  if (hdc != (HDC)0x0) {
    w = param_5[2] - *param_5;
    h = param_5[3] - param_5[1];
    SrcWidth = param_4[2] - *param_4;
    SrcHeight = param_4[3] - param_4[1];
    if (((*(byte *)(param_1 + 0x112) & 4) != 0) && (DAT_664f1d44 != (code *)0x0)) {
      uVar2 = (*DAT_664f1d44)(param_1[0x11d],hdc,*param_5,param_5[1],w,h,param_2,param_3,*param_4,
                              param_4[1],SrcWidth,SrcHeight,0x1000);
    }
    if (uVar2 == 0) {
      cLines = (param_2->bmiHeader).biHeight;
      iVar1 = (cLines - param_4[1]) - param_4[3];
      if ((w == SrcWidth) && (h == SrcHeight)) {
        iVar1 = SetDIBitsToDevice(hdc,*param_5,param_5[1],w,h,*param_4,iVar1,0,cLines,param_3,
                                  param_2,0);
        uVar2 = (uint)(iVar1 != 0);
      }
      else {
        iVar1 = StretchDIBits(hdc,*param_5,param_5[1],w,h,*param_4,iVar1,SrcWidth,SrcHeight,param_3,
                              param_2,0,0xcc0020);
        uVar2 = (uint)(iVar1 != -1);
      }
    }
    ReleaseDC((HWND)*param_1,hdc);
  }
  return uVar2;
}


