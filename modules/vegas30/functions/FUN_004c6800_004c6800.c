/* Module: vegas30.exe
   Function: FUN_004c6800
   Address: 004c6800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c6800(HDC param_1,int *param_2,UINT param_3)

{
  int nWidth;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar1;
  int nHeight;
  tagRECT local_10;
  
  nWidth = GetSystemMetrics(0x47);
  nHeight = param_2[3] - param_2[1];
  hdc = CreateCompatibleDC(param_1);
  h = CreateBitmap(nWidth,nHeight,1,1,(void *)0x0);
  pvVar1 = SelectObject(hdc,h);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = nWidth;
  local_10.bottom = nHeight;
  DrawFrameControl(hdc,&local_10,2,param_3);
  BitBlt(param_1,*param_2,param_2[1],nWidth,nHeight,hdc,0,0,0xcc0020);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  DeleteDC(hdc);
  return;
}


