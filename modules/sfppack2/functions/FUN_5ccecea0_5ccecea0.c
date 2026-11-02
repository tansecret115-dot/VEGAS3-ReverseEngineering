/* Module: sfppack2.dll
   Function: FUN_5ccecea0
   Address: 5ccecea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccecea0(HWND param_1)

{
  HWND hWnd;
  int *piVar1;
  
  piVar1 = &DAT_5cd61ad8;
  do {
    hWnd = GetDlgItem(param_1,*piVar1);
    if (hWnd != (HWND)0x0) {
      InvalidateRect(hWnd,(RECT *)0x0,1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x5cd61af8);
  return;
}


