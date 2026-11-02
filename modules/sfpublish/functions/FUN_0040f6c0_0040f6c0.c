/* Module: sfpublish.dll
   Function: FUN_0040f6c0
   Address: 0040f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f6c0(int param_1)

{
  LONG X;
  HWND pHVar1;
  int iVar2;
  int nHeight;
  LRESULT LVar3;
  int iVar4;
  undefined4 *lParam;
  HWND hWndTo;
  int iVar5;
  WPARAM wParam;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_30;
  tagRECT local_20;
  undefined4 local_10 [3];
  int local_4;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_20);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x202);
  iVar2 = GetSystemMetrics(2);
  nHeight = GetSystemMetrics(3);
  if (pHVar1 != (HWND)0x0) {
    MoveWindow(pHVar1,local_20.right - iVar2,local_20.bottom - nHeight,iVar2,nHeight,1);
  }
  iVar2 = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
  if (pHVar1 != (HWND)0x0) {
    LVar3 = SendMessageA(pHVar1,0x1004,0,0);
    if (LVar3 < 2) {
      ShowWindow(pHVar1,0);
    }
    else {
      GetWindowRect(pHVar1,&local_30);
      MoveWindow(pHVar1,0,0,DAT_0043f360,(local_20.bottom - local_20.top) - nHeight,1);
      iVar2 = GetSystemMetrics(7);
      iVar2 = iVar2 + DAT_0043f360;
      iVar4 = DAT_0043f360 + -0x30;
      wParam = 0;
      iVar5 = 4;
      if (0 < LVar3) {
        do {
          SendMessageA(pHVar1,0x100f,wParam,iVar5 << 0x10 | iVar4 / 2 & 0xffffU);
          SendMessageA(pHVar1,0x102a,wParam,0);
          if (&stack0x00000000 == (undefined1 *)0x10) {
            lParam = (undefined4 *)0x0;
          }
          else {
            local_10[0] = 0;
            lParam = local_10;
          }
          SendMessageA(pHVar1,0x100e,wParam,(LPARAM)lParam);
          wParam = wParam + 1;
          iVar5 = local_4 + 4;
        } while ((int)wParam < LVar3);
      }
    }
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),500);
  if (pHVar1 != (HWND)0x0) {
    GetWindowRect(pHVar1,&local_30);
    lpPoints = &local_30;
    cPoints = 2;
    hWndTo = GetParent(pHVar1);
    MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)lpPoints,cPoints);
    local_30.bottom = (local_20.bottom - local_20.top) - nHeight;
    local_30.right = local_20.right - local_20.left;
    MoveWindow(pHVar1,iVar2,0,local_30.right - local_30.left,local_30.bottom - local_30.top,1);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x212);
  X = local_30.left;
  if (pHVar1 != (HWND)0x0) {
    iVar2 = local_30.bottom + 2;
    GetWindowRect(pHVar1,&local_30);
    MoveWindow(pHVar1,X,iVar2,local_30.right - local_30.left,local_30.bottom - local_30.top,1);
  }
  return 0;
}


