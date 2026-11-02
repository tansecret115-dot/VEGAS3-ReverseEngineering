/* Module: sfpaplug.dll
   Function: FUN_004480c0
   Address: 004480c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004480c0(int param_1)

{
  int iVar1;
  LPSIZE ptVar2;
  HWND hWndInsertAfter;
  int iVar3;
  int X;
  int iVar4;
  UINT uFlags;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  if (*(uint *)(param_1 + 0x70) < 2) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    param_1 = 0;
  }
  else {
    ptVar2 = FUN_00441a80(0x68);
    param_1 = 8;
    *(LONG *)(iVar1 + 0x98) = ptVar2->cy + 5;
  }
  local_10 = GetSystemMetrics(7);
  iVar4 = *(int *)(iVar1 + 0x74) + 0x1c + local_10 * 2;
  iVar3 = *(int *)(iVar1 + 0x5c);
  if (*(int *)(iVar1 + 0x5c) <= iVar4) {
    iVar3 = iVar4;
  }
  local_4 = iVar3 - *(int *)(iVar1 + 100);
  iVar4 = *(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x98) + 4 + *(int *)(iVar1 + 0x78);
  local_8 = iVar4 - *(int *)(iVar1 + 0x68);
  *(int *)(iVar1 + 100) = iVar3;
  *(int *)(iVar1 + 0x68) = iVar4;
  SetWindowPos(*(HWND *)(iVar1 + 0x48),(HWND)0x0,0,0,iVar3,iVar4,0x16);
  GetWindowRect(*(HWND *)(iVar1 + 0x48),(LPRECT)(iVar1 + 0x4c));
  if (*(HWND *)(iVar1 + 0x84) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(iVar1 + 0x84),(HWND)0x0,0xc - local_10,*(int *)(iVar1 + 0xe8) + 0xc,
                 iVar3 + -0x18,*(int *)(iVar1 + 0x78) + 4,0x14);
    ShowWindow(*(HWND *)(iVar1 + 0x84),8);
    GetWindowRect(*(HWND *)(iVar1 + 0x84),(LPRECT)(iVar1 + 0x88));
    MapWindowPoints((HWND)0x0,*(HWND *)(iVar1 + 0x48),(LPPOINT)(iVar1 + 0x88),2);
  }
  if (*(HWND *)(iVar1 + 0xb0) != (HWND)0x0) {
    SendMessageA(*(HWND *)(iVar1 + 0xb0),0x453,0,(LPARAM)&local_10);
    uFlags = 0x10;
    iVar3 = *(int *)(iVar1 + 0xcc) + 2;
    X = *(int *)(iVar1 + 0xe4) - local_10;
    iVar4 = local_10;
    hWndInsertAfter = GetDlgItem(*(HWND *)(iVar1 + 0x48),0x12e);
    SetWindowPos(*(HWND *)(iVar1 + 0xb0),hWndInsertAfter,X,iVar3,iVar4,local_c,uFlags);
    ShowWindow(*(HWND *)(iVar1 + 0xb0),8);
  }
  if (*(HWND *)(iVar1 + 0x9c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(iVar1 + 0x9c),*(HWND *)(iVar1 + 0x84),*(int *)(iVar1 + 0x88),
                 *(int *)(iVar1 + 0x94) + -2,(*(int *)(iVar1 + 0x90) - *(int *)(iVar1 + 0x88)) + -1,
                 *(int *)(iVar1 + 0x98),0x10);
    ShowWindow(*(HWND *)(iVar1 + 0x9c),param_1);
  }
  iVar3 = local_4;
  iVar4 = local_8;
  FUN_004442b0(*(HWND *)(iVar1 + 0x48),1,local_4,local_8);
  FUN_004442b0(*(HWND *)(iVar1 + 0x48),2,iVar3,iVar4);
  return 1;
}


