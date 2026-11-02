/* Module: sftrans1.dll
   Function: FUN_004c03f0
   Address: 004c03f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004c03f0(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


