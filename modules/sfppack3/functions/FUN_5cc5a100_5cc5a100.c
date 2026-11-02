/* Module: sfppack3.dll
   Function: FUN_5cc5a100
   Address: 5cc5a100
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cc5a100(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


