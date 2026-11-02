/* Module: sfcdi.dll
   Function: FUN_5bf1c2d0
   Address: 5bf1c2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1c2d0(HWND param_1,int param_2,LPCSTR param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(param_1,param_2);
  SetWindowTextA(hWnd,param_3);
  UpdateWindow(hWnd);
  return;
}


