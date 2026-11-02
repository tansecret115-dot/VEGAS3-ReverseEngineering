/* Module: mcplug.dll
   Function: FUN_00415950
   Address: 00415950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415950(HWND param_1)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(param_1,0x40c);
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,5);
    EnableWindow(hWnd,1);
  }
  return;
}


