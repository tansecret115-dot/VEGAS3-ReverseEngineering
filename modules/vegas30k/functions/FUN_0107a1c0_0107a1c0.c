/* Module: vegas30k.dll
   Function: FUN_0107a1c0
   Address: 0107a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0107a1c0(void)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x18);
  ReleaseDC((HWND)0x0,hdc);
  return iVar1 == -1;
}


