/* Module: mcplug.dll
   Function: FUN_0043b820
   Address: 0043b820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b820(HWND param_1,HWND param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  uint uVar4;
  tagPOINT local_38;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  hWnd = GetParent(param_1);
  if (((param_4 & 0x8000) == 0) || (BVar3 = IsIconic(hWnd), param_2 = hWnd, BVar3 == 0)) {
    if (param_2 != (HWND)0x0) {
      if ((param_4 & 0x1000) == 0) {
        GetWindowRect(param_2,&local_30);
      }
      else {
        GetClientRect(param_2,&local_30);
        MapWindowPoints(param_2,(HWND)0x0,(LPPOINT)&local_30,2);
      }
      goto LAB_0043b8bd;
    }
  }
  else {
    param_2 = (HWND)0x0;
  }
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = iVar1;
  local_30.bottom = iVar2;
LAB_0043b8bd:
  GetWindowRect(param_1,&local_10);
  uVar4 = param_4 & 0xf;
  iVar1 = local_10.right - local_10.left;
  iVar2 = local_10.bottom - local_10.top;
  if (uVar4 == 1) {
    local_20.left = ((local_30.right - iVar1) + local_30.left) / 2;
    local_20.top = ((local_30.bottom - local_30.top) / 3 - iVar2 / 3) + local_30.top;
  }
  else if (uVar4 == 2) {
    GetCursorPos(&local_38);
    local_20.left = local_38.x - iVar1 / 2;
    local_20.top = local_38.y - iVar2 / 2;
  }
  else if (uVar4 == 3) {
    local_38.x = *param_3;
    local_38.y = param_3[1];
    local_20.left = local_38.x - iVar1 / 2;
    local_20.top = local_38.y - iVar2 / 2;
  }
  else {
    local_20.left = ((local_30.right - iVar1) + local_30.left) / 2;
    local_20.top = ((local_30.bottom - iVar2) + local_30.top) / 2;
  }
  if ((param_2 == hWnd) && (uVar4 = GetWindowLongA(param_1,-0x10), (uVar4 & 0x40000000) != 0)) {
    local_20.left = local_20.left - local_30.left;
    local_20.top = local_20.top - local_30.top;
  }
  local_20.right = local_20.left + iVar1;
  local_20.bottom = local_20.top + iVar2;
  FUN_0043ad30(&local_20,0,0);
  SetWindowPos(param_1,(HWND)0x0,local_20.left,local_20.top,0,0,0x15);
  return;
}


