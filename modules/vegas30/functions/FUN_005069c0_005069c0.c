/* Module: vegas30.exe
   Function: FUN_005069c0
   Address: 005069c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005069c0(undefined4 *param_1,int param_2)

{
  HWND pHVar1;
  DWORD dwExStyle;
  DWORD dwStyle;
  int iVar2;
  int iVar3;
  BOOL bMenu;
  tagRECT local_10;
  
  iVar3 = 0;
  iVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 4) == 0) {
    pHVar1 = GetDlgItem((HWND)*param_1,1);
    GetWindowRect(pHVar1,&local_10);
    iVar2 = local_10.right - local_10.left;
    pHVar1 = GetDlgItem((HWND)*param_1,2);
    GetWindowRect(pHVar1,&local_10);
    iVar2 = iVar2 + (param_1[8] - local_10.left) + local_10.right;
    iVar3 = (local_10.bottom - local_10.top) + param_1[6];
  }
  local_10.right = iVar2 + param_1[7] * 2;
  local_10.bottom = param_1[9] + param_1[7] + iVar3;
  local_10.left = 0;
  local_10.top = 0;
  dwExStyle = GetWindowLongA((HWND)*param_1,-0x14);
  bMenu = 0;
  dwStyle = GetWindowLongA((HWND)*param_1,-0x10);
  AdjustWindowRectEx(&local_10,dwStyle,bMenu,dwExStyle);
  iVar2 = local_10.right - local_10.left;
  if (local_10.right - local_10.left < *(int *)(param_2 + 0x18)) {
    iVar2 = *(int *)(param_2 + 0x18);
  }
  *(int *)(param_2 + 0x18) = iVar2;
  if (local_10.bottom - local_10.top < *(int *)(param_2 + 0x1c)) {
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c);
    return 1;
  }
  *(LONG *)(param_2 + 0x1c) = local_10.bottom - local_10.top;
  return 1;
}


