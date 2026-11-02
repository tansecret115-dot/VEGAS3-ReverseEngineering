/* Module: vidcap30.exe
   Function: FUN_00442fe0
   Address: 00442fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442fe0(int param_1,int *param_2)

{
  int iVar1;
  WPARAM wParam;
  HCURSOR hCursor;
  tagRECT *lParam;
  int iVar2;
  tagRECT local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  GetClientRect(*(HWND *)(param_1 + 0x1668),&local_24);
  local_14 = *param_2;
  local_10 = param_2[1];
  if ((((local_14 < local_24.left) || (local_24.right <= local_14)) || (local_10 < local_24.top)) ||
     (local_24.bottom <= local_10)) {
    iVar2 = 0x7f88;
    FUN_00443120(*(undefined4 *)(param_1 + 0x1668),param_1 + 0x17a0,0xffffffff);
  }
  else {
    iVar2 = 0xc;
    iVar1 = *(int *)(param_1 + 0x17a4);
    if (*(int *)(param_1 + 0x17a4) <= local_10) {
      local_14 = 2;
      wParam = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1012,0,(LPARAM)&local_14);
      if (wParam == 0xffffffff) {
        iVar1 = *(int *)(param_1 + 0x17a8);
      }
      else {
        if (&stack0x00000000 == (undefined1 *)0x24) {
          lParam = (tagRECT *)0x0;
        }
        else {
          local_24.left = 0;
          lParam = &local_24;
        }
        SendMessageA(*(HWND *)(param_1 + 0x1668),0x100e,wParam,(LPARAM)lParam);
        iVar1 = local_24.top;
      }
    }
    local_24.top = iVar1;
    FUN_00443120(*(undefined4 *)(param_1 + 0x1668),param_1 + 0x17a0,local_24.top);
  }
  if (iVar2 != *(int *)(param_1 + 0x1798)) {
    *(int *)(param_1 + 0x1798) = iVar2;
    hCursor = (HCURSOR)_SfGetUICursor_4(iVar2);
    SetCursor(hCursor);
  }
  return;
}


