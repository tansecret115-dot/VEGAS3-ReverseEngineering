/* Module: vidcap30.exe
   Function: FUN_0040ae40
   Address: 0040ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0040ae40(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  tagPOINT local_30;
  tagPOINT local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  local_30.x = (LONG)(short)param_4;
  local_30.y = (LONG)(short)((uint)param_4 >> 0x10);
  if (*(int *)(param_1 + 0x4c) != 4) {
    if (param_2 != 0xa1) {
      LVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),param_2,param_3,param_4);
      return LVar1;
    }
    *(LONG *)(param_1 + 0x70) = local_30.x;
    *(undefined4 *)(param_1 + 0x4c) = 4;
    *(LONG *)(param_1 + 0x74) = local_30.y;
    SetCapture(*(HWND *)(param_1 + 8));
    return 0;
  }
  if (param_2 != 0xa0) {
    if (param_2 != 0x200) {
      if ((param_2 != 0xa2) && (param_2 != 0x202)) {
        LVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),param_2,param_3,param_4);
        return LVar1;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      ReleaseCapture();
      return 0;
    }
    ClientToScreen(*(HWND *)(param_1 + 8),&local_30);
  }
  uVar2 = local_30.y - *(int *)(param_1 + 0x74);
  uVar5 = (int)uVar2 >> 0x1f;
  if (((int)((uVar2 ^ uVar5) - uVar5) < 0xb) &&
     (uVar2 = local_30.x - *(int *)(param_1 + 0x70), uVar5 = (int)uVar2 >> 0x1f,
     (int)((uVar2 ^ uVar5) - uVar5) < 0xb)) {
    return 0;
  }
  GetWindowRect(*(HWND *)(param_1 + 8),&local_10);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  ReleaseCapture();
  FUN_0040adb0(param_1,1);
  GetCursorPos(&local_28);
  GetWindowRect(*(HWND *)(param_1 + 8),&local_20);
  iVar3 = local_30.x - *(int *)(param_1 + 0x70);
  iVar4 = local_30.y - *(int *)(param_1 + 0x74);
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 2:
    local_20.left = local_20.left + iVar3;
    local_20.top = local_20.top + iVar4;
    uVar2 = 1;
    break;
  case 0xb:
    local_20.right = local_10.right + iVar3;
    goto LAB_0040b028;
  case 0xc:
    local_20.top = local_20.top + iVar4;
    local_20.bottom = local_20.bottom - iVar4;
    break;
  case 0xd:
    local_20.left = local_20.left + iVar3;
    local_20.top = local_20.top + iVar4;
    local_20.right = local_20.right - iVar3;
    local_20.bottom = local_20.bottom - iVar4;
    break;
  case 0xe:
    local_20.top = local_20.top + iVar4;
    local_20.bottom = local_20.bottom - iVar4;
    local_20.right = local_10.right + iVar3;
    break;
  case 0xf:
    local_20.bottom = local_10.bottom + iVar4;
    goto LAB_0040b028;
  case 0x10:
    local_20.bottom = local_10.bottom + iVar4;
  case 10:
    local_20.left = local_20.left + iVar3;
    local_20.right = local_20.right - iVar3;
    break;
  case 0x11:
    local_20.right = local_10.right + iVar3;
    local_20.bottom = local_10.bottom + iVar4;
LAB_0040b028:
    uVar2 = 2;
  }
  SetWindowPos(*(HWND *)(param_1 + 8),(HWND)0x0,local_20.left,local_20.top,
               local_20.right - local_20.left,local_20.bottom - local_20.top,uVar2 | 4);
  UpdateWindow(*(HWND *)(param_1 + 8));
  SendMessageA(*(HWND *)(param_1 + 8),0xa1,*(WPARAM *)(param_1 + 0x1c),
               local_28.y << 0x10 | local_28.x & 0xffffU);
  return 0;
}


