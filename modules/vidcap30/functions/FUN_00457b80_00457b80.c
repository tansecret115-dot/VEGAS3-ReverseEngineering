/* Module: vidcap30.exe
   Function: FUN_00457b80
   Address: 00457b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457b80(HWND param_1,int param_2,int param_3,int param_4)

{
  HWND hDlg;
  HDWP pvVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  tagRECT *lpRect;
  tagRECT local_20;
  tagRECT local_10;
  
  hDlg = param_1;
  iVar3 = param_3 - *(int *)(param_2 + 0x198);
  local_20.top = 0;
  local_10.top = 0;
  local_20.right = 0;
  local_10.right = 0;
  iVar4 = param_4 - *(int *)(param_2 + 0x19c);
  local_20.left = 0;
  local_20.bottom = 0;
  local_10.left = 0;
  local_10.bottom = 0;
  pvVar1 = BeginDeferWindowPos(10);
  pHVar2 = GetDlgItem(param_1,DAT_005b6000);
  GetWindowRect(pHVar2,&local_20);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_20,2);
  local_20.left = local_20.left + iVar3;
  local_20.bottom = local_20.bottom + iVar4;
  local_20.top = local_20.top + iVar4;
  local_20.right = local_20.right + iVar3;
  pvVar1 = DeferWindowPos(pvVar1,pHVar2,(HWND)0x0,local_20.left,local_20.top,
                          local_20.right - local_20.left,local_20.bottom - local_20.top,0x214);
  param_1 = (HWND)&DAT_005b6004;
  do {
    pHVar2 = GetDlgItem(hDlg,param_1->unused);
    GetWindowRect(pHVar2,&local_20);
    MapWindowPoints((HWND)0x0,hDlg,(LPPOINT)&local_20,2);
    local_20.bottom = local_20.bottom + iVar4;
    local_20.top = local_20.top + iVar4;
    pvVar1 = DeferWindowPos(pvVar1,pHVar2,(HWND)0x0,local_20.left,local_20.top,
                            local_20.right - local_20.left,local_20.bottom - local_20.top,0x214);
    param_1 = param_1 + 1;
  } while (param_1 < &DAT_005b6014);
  param_1 = (HWND)&DAT_005b6014;
  do {
    pHVar2 = GetDlgItem(hDlg,param_1->unused);
    GetWindowRect(pHVar2,&local_20);
    MapWindowPoints((HWND)0x0,hDlg,(LPPOINT)&local_20,2);
    local_20.bottom = local_20.bottom + iVar4;
    local_20.right = local_20.right + iVar3;
    pvVar1 = DeferWindowPos(pvVar1,pHVar2,(HWND)0x0,local_20.left,local_20.top,
                            local_20.right - local_20.left,local_20.bottom - local_20.top,0x216);
    param_1 = param_1 + 1;
  } while (param_1 < &DAT_005b601c);
  EndDeferWindowPos(pvVar1);
  lpRect = &local_10;
  pHVar2 = GetDlgItem(hDlg,0x9c80);
  GetWindowRect(pHVar2,lpRect);
  MapWindowPoints((HWND)0x0,hDlg,(LPPOINT)&local_10,2);
  GetClientRect(hDlg,&local_20);
  local_20.top = local_10.bottom + 1;
  InvalidateRect(hDlg,&local_20,0);
  *(int *)(param_2 + 0x198) = param_3;
  *(int *)(param_2 + 0x19c) = param_4;
  return;
}


