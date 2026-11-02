/* Module: sftrkfx1.dll
   Function: FUN_5cbc9f70
   Address: 5cbc9f70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cbc9f70(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


