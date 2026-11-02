/* Module: sfmarket2.dll
   Function: FUN_0040ddf0
   Address: 0040ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040ddf0(int param_1)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  HWND pHVar4;
  tagRECT *ptVar5;
  UINT UVar6;
  int local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  iVar1 = GetSystemMetrics(2);
  iVar2 = GetSystemMetrics(3);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
  local_28 = iVar2;
  if ((pHVar3 != (HWND)0x0) && (*(int *)(param_1 + 0x10b0) != 0)) {
    GetClientRect(pHVar3,&local_20);
    if (iVar2 <= local_20.bottom - local_20.top) {
      local_28 = local_20.bottom - local_20.top;
    }
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f5);
  if (pHVar3 != (HWND)0x0) {
    if (*(int *)(param_1 + 0x10ac) == 0) {
      MoveWindow(pHVar3,(local_10.right - iVar1) + 0x40,(local_10.bottom - iVar2) + 0x40,iVar1,iVar2
                 ,1);
      if (*(int *)(param_1 + 0x10b0) == 0) {
        local_28 = 0;
      }
    }
    else {
      MoveWindow(pHVar3,local_10.right - iVar1,local_10.bottom - iVar2,iVar1,iVar2,1);
    }
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),1);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_20);
    iVar2 = local_20.right - local_20.left;
    UVar6 = 2;
    iVar1 = local_20.bottom - local_20.top;
    local_10.bottom = local_10.bottom + (-4 - iVar1);
    ptVar5 = &local_20;
    pHVar4 = GetParent(pHVar3);
    MapWindowPoints(pHVar3,pHVar4,(LPPOINT)ptVar5,UVar6);
    MoveWindow(pHVar3,(local_10.right - iVar2) / 2,local_10.bottom + 2,iVar2,iVar1,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),500);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_20);
    ptVar5 = &local_20;
    UVar6 = 2;
    pHVar4 = GetParent(pHVar3);
    MapWindowPoints(pHVar3,pHVar4,(LPPOINT)ptVar5,UVar6);
    local_20.right = local_10.right - local_10.left;
    local_20.bottom = ((local_10.bottom - local_10.top) - local_28) + -1;
    MoveWindow(*(HWND *)(param_1 + 0x48),local_20.left,local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
    MoveWindow(pHVar3,local_20.left,local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f6);
  if (pHVar3 != (HWND)0x0) {
    iVar1 = local_10.bottom - local_28;
    GetWindowRect(pHVar3,&local_20);
    MoveWindow(pHVar3,0,iVar1 + 1,local_20.right - local_20.left,
               ((int)(local_28 - 1U) < 1) - 1 & local_28 - 1U,1);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
  if (pHVar3 != (HWND)0x0) {
    GetClientRect(pHVar3,&local_20);
    MoveWindow(pHVar3,(local_20.left - local_20.right) + -0x10 + local_10.right,
               (local_10.bottom - local_20.bottom) + local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
  }
  return 0;
}


