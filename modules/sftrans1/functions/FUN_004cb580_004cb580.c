/* Module: sftrans1.dll
   Function: FUN_004cb580
   Address: 004cb580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cb580(HWND param_1,HWND param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  uint uVar4;
  tagPOINT local_38;
  tagRECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
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
      goto LAB_004cb61d;
    }
  }
  else {
    param_2 = (HWND)0x0;
  }
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = iVar1;
  local_30.bottom = iVar2;
LAB_004cb61d:
  GetWindowRect(param_1,&local_10);
  param_4 = param_4 & 0xf;
  iVar1 = local_10.right - local_10.left;
  iVar2 = local_10.bottom - local_10.top;
  if (param_4 == 1) {
    local_20 = ((local_30.right - iVar1) + local_30.left) / 2;
    local_1c = ((local_30.bottom - local_30.top) / 3 - iVar2 / 3) + local_30.top;
  }
  else if (param_4 == 2) {
    GetCursorPos(&local_38);
    local_20 = local_38.x - iVar1 / 2;
    local_1c = local_38.y - iVar2 / 2;
  }
  else if (param_4 == 3) {
    local_38.x = *param_3;
    local_38.y = param_3[1];
    local_20 = local_38.x - iVar1 / 2;
    local_1c = local_38.y - iVar2 / 2;
  }
  else {
    local_20 = ((local_30.right - iVar1) + local_30.left) / 2;
    local_1c = ((local_30.bottom - iVar2) + local_30.top) / 2;
  }
  if ((param_2 == hWnd) && (uVar4 = GetWindowLongA(param_1,-0x10), (uVar4 & 0x40000000) != 0)) {
    local_20 = local_20 - local_30.left;
    local_1c = local_1c - local_30.top;
  }
  local_18 = local_20 + iVar1;
  local_14 = local_1c + iVar2;
  FUN_004caa90(&local_20,0,0);
  SetWindowPos(param_1,(HWND)0x0,local_20,local_1c,0,0,0x15);
  return;
}


