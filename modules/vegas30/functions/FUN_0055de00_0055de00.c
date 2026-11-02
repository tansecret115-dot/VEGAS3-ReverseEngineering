/* Module: vegas30.exe
   Function: FUN_0055de00
   Address: 0055de00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055de00(HWND param_1,BOOL param_2,int param_3)

{
  int nIDDlgItem;
  HWND hWnd;
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = &param_3;
    nIDDlgItem = param_3;
    do {
      hWnd = GetDlgItem(param_1,nIDDlgItem);
      EnableWindow(hWnd,param_2);
      nIDDlgItem = puVar1[1];
      puVar1 = puVar1 + 1;
    } while (nIDDlgItem != 0);
  }
  return;
}


