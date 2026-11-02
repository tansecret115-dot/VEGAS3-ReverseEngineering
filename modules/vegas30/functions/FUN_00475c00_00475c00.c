/* Module: vegas30.exe
   Function: FUN_00475c00
   Address: 00475c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475c00(int param_1)

{
  HDC hDC;
  
  if (((DAT_0064be7c & 4) != 0) && (DAT_0064be70 != DAT_0064be68)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&DAT_0064be68,0);
  }
  UpdateWindow(*(HWND *)(param_1 + 4));
  hDC = GetDC(*(HWND *)(param_1 + 4));
  FUN_004759e0(param_1,hDC);
  ReleaseDC(*(HWND *)(param_1 + 4),hDC);
  return;
}


