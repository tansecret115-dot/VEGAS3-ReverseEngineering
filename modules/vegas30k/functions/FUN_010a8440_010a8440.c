/* Module: vegas30k.dll
   Function: FUN_010a8440
   Address: 010a8440
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010a8440(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


