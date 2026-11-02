/* Module: mcplug.dll
   Function: FUN_00415920
   Address: 00415920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415920(HWND param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(param_1,0x40c);
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,0);
    EnableWindow(hWnd,0);
  }
  return;
}


