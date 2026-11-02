/* Module: mcplugrw.dll
   Function: FUN_00405d50
   Address: 00405d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405d50(HWND param_1,int *param_2,int param_3)

{
  HWND hWnd;
  
  if (0 < param_3) {
    do {
      hWnd = GetDlgItem(param_1,*param_2);
      if (hWnd != (HWND)0x0) {
        ShowWindow(hWnd,param_2[1]);
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


