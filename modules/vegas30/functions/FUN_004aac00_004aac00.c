/* Module: vegas30.exe
   Function: FUN_004aac00
   Address: 004aac00
   Source: Ghidra pseudocode (Stage 10 batch) */


HDC FUN_004aac00(int param_1)

{
  HDC hdc;
  HRGN hrgn;
  RECT local_10;
  
  hdc = *(HDC *)(param_1 + 0xe90);
  if (hdc == (HDC)0x0) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    local_10.left = *(LONG *)(param_1 + 0xac0);
    local_10.top = *(LONG *)(param_1 + 0xac4);
    local_10.right = *(LONG *)(param_1 + 0xac8);
    local_10.bottom = *(LONG *)(param_1 + 0xacc);
    hrgn = CreateRectRgnIndirect(&local_10);
    SelectClipRgn(hdc,hrgn);
    DeleteObject(hrgn);
  }
  return hdc;
}


