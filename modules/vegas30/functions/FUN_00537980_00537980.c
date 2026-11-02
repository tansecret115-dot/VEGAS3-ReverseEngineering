/* Module: vegas30.exe
   Function: FUN_00537980
   Address: 00537980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00537980(HWND param_1)

{
  HWND hWnd;
  BOOL bEnable;
  
  bEnable = 1;
  hWnd = GetDlgItem(param_1,9);
  EnableWindow(hWnd,bEnable);
  return;
}


