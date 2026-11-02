/* Module: vidcap30.exe
   Function: FUN_00409b00
   Address: 00409b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409b00(int param_1)

{
  HWND hWnd;
  
  hWnd = GetFocus();
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (*(HWND *)(param_1 + 8) == hWnd) break;
    if (*(HWND *)(param_1 + 8) == (HWND)*DAT_005ba4c0) {
      return 0;
    }
    hWnd = GetParent(hWnd);
  }
  return 1;
}


