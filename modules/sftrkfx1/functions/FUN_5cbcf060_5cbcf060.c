/* Module: sftrkfx1.dll
   Function: FUN_5cbcf060
   Address: 5cbcf060
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cbcf060(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


