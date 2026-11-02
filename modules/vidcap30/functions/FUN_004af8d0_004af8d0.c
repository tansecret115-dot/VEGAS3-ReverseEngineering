/* Module: vidcap30.exe
   Function: FUN_004af8d0
   Address: 004af8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004af8d0(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


