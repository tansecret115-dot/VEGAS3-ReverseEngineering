/* Module: g2plug.dll
   Function: FUN_5f80c530
   Address: 5f80c530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80c530(HWND param_1,int *param_2,BOOL param_3)

{
  int nIDDlgItem;
  HWND hWnd;
  BOOL bEnable;
  
  nIDDlgItem = *param_2;
  while (nIDDlgItem != 0) {
    param_2 = param_2 + 1;
    bEnable = param_3;
    hWnd = GetDlgItem(param_1,nIDDlgItem);
    EnableWindow(hWnd,bEnable);
    nIDDlgItem = *param_2;
  }
  return;
}


