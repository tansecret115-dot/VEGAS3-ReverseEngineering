/* Module: vegas30.exe
   Function: FUN_00416750
   Address: 00416750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416750(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  tagRECT local_10;
  
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) != 3) && ((*(uint *)(param_1 + 0xc) & 2) == 0)) {
    local_10.right = *param_2;
    local_10.bottom = param_2[1];
    local_10.left = 0;
    local_10.top = 0;
    MapWindowPoints(*(HWND *)(param_1 + 8),(HWND)0x0,(LPPOINT)&local_10,2);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 8) == 0) {
      FUN_00411660(&local_10,uVar1 >> 4 & 1,uVar1 & 7);
    }
    else if ((uVar1 & 0x100000) == 0) {
      dwExStyle = GetWindowLongA(*(HWND *)(param_1 + 8),-0x14);
      bMenu = 0;
      dwStyle = GetWindowLongA(*(HWND *)(param_1 + 8),-0x10);
      AdjustWindowRectEx(&local_10,dwStyle,bMenu,dwExStyle);
    }
    else {
      iVar2 = GetSystemMetrics(4);
      if ((iVar2 * 7) / 0xc < 10) {
        iVar2 = 9;
      }
      else {
        iVar2 = GetSystemMetrics(4);
        iVar2 = (iVar2 * 7) / 0xc;
      }
      local_10.right = local_10.right + 3;
      local_10.top = local_10.top + (-3 - iVar2);
      local_10.left = local_10.left + -3;
      local_10.bottom = local_10.bottom + 3;
    }
    SetWindowPos(*(HWND *)(param_1 + 8),(HWND)0x0,local_10.left,local_10.top,
                 local_10.right - local_10.left,local_10.bottom - local_10.top,0x14);
  }
  return;
}


