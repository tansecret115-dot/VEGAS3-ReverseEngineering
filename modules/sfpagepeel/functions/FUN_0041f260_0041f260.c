/* Module: sfpagepeel.dll
   Function: FUN_0041f260
   Address: 0041f260
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041f260(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


