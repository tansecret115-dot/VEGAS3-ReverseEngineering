/* Module: vfplugs.dll
   Function: FUN_0042e910
   Address: 0042e910
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_0042e910(HWND param_1,int param_2,int param_3,int param_4)

{
  HWND hWnd;
  BOOL BVar1;
  tagRECT local_10;
  
  hWnd = GetDlgItem(param_1,param_2);
  if (hWnd != (HWND)0x0) {
    GetClientRect(hWnd,&local_10);
    BVar1 = SetWindowPos(hWnd,(HWND)0x0,0,0,(local_10.right - local_10.left) + param_3,
                         (local_10.bottom - local_10.top) + param_4,0x16);
    return BVar1;
  }
  return 0;
}


