/* Module: vegas30.exe
   Function: FUN_00563450
   Address: 00563450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00563450(int param_1)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int nWidth;
  int nHeight;
  HWND pHVar4;
  int iVar5;
  tagRECT *ptVar6;
  UINT UVar7;
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  GetWindowRect(*(HWND *)(param_1 + 4),&local_20);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x38);
  iVar5 = ((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44)) - local_20.top) + local_20.bottom;
  CopyRect((LPRECT)(param_1 + 0x38),&local_20);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0xc5ec);
  nWidth = GetSystemMetrics(2);
  nHeight = GetSystemMetrics(3);
  if (pHVar3 != (HWND)0x0) {
    MoveWindow(pHVar3,local_10.right - nWidth,local_10.bottom - nHeight,nWidth,nHeight,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0xc5eb);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_40);
    ptVar6 = &local_40;
    UVar7 = 2;
    pHVar4 = GetParent(pHVar3);
    MapWindowPoints(pHVar3,pHVar4,(LPPOINT)ptVar6,UVar7);
    MoveWindow(pHVar3,local_40.left,local_40.top + iVar5,local_40.right - local_40.left,
               local_40.bottom - local_40.top,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0xc5ea);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_30);
    ptVar6 = &local_30;
    UVar7 = 2;
    pHVar4 = GetParent(pHVar3);
    MapWindowPoints(pHVar3,pHVar4,(LPPOINT)ptVar6,UVar7);
    MoveWindow(pHVar3,local_30.left,local_30.top,
               (local_30.right - local_30.left) + ((local_20.right - iVar1) - local_20.left) + iVar2
               ,(local_30.bottom - local_30.top) + iVar5,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),1);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_40);
    ptVar6 = &local_40;
    UVar7 = 2;
    pHVar4 = GetParent(pHVar3);
    MapWindowPoints(pHVar3,pHVar4,(LPPOINT)ptVar6,UVar7);
    MoveWindow(pHVar3,(((local_30.right - local_30.left) - local_40.right) + local_40.left) / 2 +
                      local_30.left,local_40.top + iVar5,local_40.right - local_40.left,
               local_40.bottom - local_40.top,1);
  }
  return 0;
}


