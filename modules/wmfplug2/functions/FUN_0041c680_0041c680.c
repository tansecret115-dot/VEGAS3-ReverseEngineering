/* Module: wmfplug2.dll
   Function: FUN_0041c680
   Address: 0041c680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c680(HWND param_1,int *param_2,BOOL param_3)

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


