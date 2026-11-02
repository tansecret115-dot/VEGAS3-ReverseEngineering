/* Module: sfmarket2.dll
   Function: FUN_00413580
   Address: 00413580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413580(int param_1)

{
  LONG LVar1;
  HWND pHVar2;
  int iVar3;
  int nHeight;
  HWND hWndTo;
  code *pcVar4;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0xa3cb);
  iVar3 = GetSystemMetrics(2);
  nHeight = GetSystemMetrics(3);
  if (pHVar2 != (HWND)0x0) {
    MoveWindow(pHVar2,local_10.right - iVar3,local_10.bottom - nHeight,iVar3,nHeight,1);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),500);
  pcVar4 = MoveWindow_exref;
  if (pHVar2 != (HWND)0x0) {
    GetClientRect(pHVar2,&local_20);
    lpPoints = &local_20;
    cPoints = 2;
    hWndTo = GetParent(pHVar2);
    MapWindowPoints(pHVar2,hWndTo,(LPPOINT)lpPoints,cPoints);
    pcVar4 = MoveWindow_exref;
    local_20.right = local_10.right - local_10.left;
    local_20.bottom =
         ((local_10.bottom - (-(uint)(*(int *)(param_1 + 0x78) != 0) & 4)) - local_10.top) - nHeight
    ;
    MoveWindow(pHVar2,local_20.left,local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f6);
  LVar1 = local_20.left;
  if (pHVar2 != (HWND)0x0) {
    iVar3 = local_20.bottom + 2;
    GetClientRect(pHVar2,&local_20);
    (*pcVar4)(pHVar2,LVar1,iVar3,local_20.right - local_20.left,local_20.bottom - local_20.top,1);
  }
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9), pHVar2 != (HWND)0x0)) {
    GetClientRect(pHVar2,&local_20);
    (*pcVar4)(pHVar2,(local_20.left - local_20.right) + -0x14 + local_10.right,
              (local_20.top - local_20.bottom) + local_10.bottom,local_20.right - local_20.left,
              local_20.bottom - local_20.top,1);
  }
  return 0;
}


