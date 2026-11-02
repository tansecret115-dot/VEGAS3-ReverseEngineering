/* Module: vidpcore.dll
   Function: FUN_5deb98b0
   Address: 5deb98b0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_5deb98b0(HWND param_1,int param_2,int param_3,int param_4)

{
  HWND hWnd;
  BOOL BVar1;
  tagRECT local_10;
  
  hWnd = GetDlgItem(param_1,param_2);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_10);
    MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
    BVar1 = SetWindowPos(hWnd,(HWND)0x0,local_10.left + param_3,local_10.top + param_4,0,0,0x15);
    return BVar1;
  }
  return 0;
}


