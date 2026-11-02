/* Module: sfpublish.dll
   Function: FUN_0040c310
   Address: 0040c310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c310(int param_1)

{
  LONG X;
  HWND pHVar1;
  int iVar2;
  int nHeight;
  HWND hWndTo;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x202);
  iVar2 = GetSystemMetrics(2);
  nHeight = GetSystemMetrics(3);
  if (pHVar1 != (HWND)0x0) {
    MoveWindow(pHVar1,local_10.right - iVar2,local_10.bottom - nHeight,iVar2,nHeight,1);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),500);
  if (pHVar1 != (HWND)0x0) {
    GetWindowRect(pHVar1,&local_20);
    lpPoints = &local_20;
    cPoints = 2;
    hWndTo = GetParent(pHVar1);
    MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)lpPoints,cPoints);
    local_20.right = local_10.right - local_10.left;
    local_20.bottom = (local_10.bottom - local_10.top) - nHeight;
    MoveWindow(pHVar1,local_20.left,local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x212);
  X = local_20.left;
  if (pHVar1 != (HWND)0x0) {
    iVar2 = local_20.bottom + 2;
    GetWindowRect(pHVar1,&local_20);
    MoveWindow(pHVar1,X,iVar2,local_20.right - local_20.left,local_20.bottom - local_20.top,1);
  }
  return 0;
}


