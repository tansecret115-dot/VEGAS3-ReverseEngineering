/* Module: mcplug.dll
   Function: FUN_00432390
   Address: 00432390
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00432390(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


