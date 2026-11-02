/* Module: vidcap30.exe
   Function: FUN_004fdc50
   Address: 004fdc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fdc50(int param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  POINT Point;
  HWND pHVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  WPARAM wParam;
  HCURSOR hCursor;
  tagRECT *lParam;
  int iVar7;
  HWND pHVar8;
  tagRECT local_44;
  tagPOINT local_34 [2];
  HWND local_20;
  WPARAM local_1c;
  undefined4 local_18;
  LONG local_14;
  LONG local_10;
  int local_c;
  undefined4 local_8;
  
  hWnd = *(HWND *)(param_1 + 4);
  pHVar2 = GetParent(hWnd);
  DVar3 = GetMessagePos();
  local_14 = (LONG)(short)DVar3;
  local_10 = (LONG)(short)(DVar3 >> 0x10);
  uVar4 = GetWindowLongA(pHVar2,-0x10);
  pHVar8 = hWnd;
  if ((uVar4 & 0x80000000) != 0) {
    pHVar8 = pHVar2;
  }
  GetWindowRect(pHVar8,&local_44);
  pHVar8 = *(HWND *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar7 = 0x7f88;
  Point.y = local_10;
  Point.x = local_14;
  pHVar2 = WindowFromPoint(Point);
  if ((pHVar2 == *(HWND *)(param_1 + 4)) ||
     (BVar5 = IsChild(*(HWND *)(param_1 + 4),pHVar2), BVar5 != 0)) {
    if ((*(uint *)(param_1 + 0x4a4) & 1) == 0) {
      if ((*(int *)(param_1 + 0x34) != 0) && ((*(uint *)(param_1 + 0x4a4) & 0x10) == 0)) {
        ImageList_DragShowNolock(1);
      }
      iVar6 = FUN_004fdb70(pHVar8,local_14,local_10);
      if (iVar6 == 0) {
        iVar6 = FUN_004fdb70(uVar1,local_14,local_10);
        if (iVar6 == 0) {
          if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
            FUN_004fe000(pHVar8,param_1 + 0x4b0,0xffffffff);
          }
          if ((*(byte *)(param_1 + 0x4a4) & 8) == 0) {
            if (*(int *)(param_1 + 0x34) != 0) {
              FUN_00498870(param_1,local_14,local_10);
            }
          }
          else {
            if (*(int *)(param_1 + 0x34) != 0) {
              FUN_00498850(param_1);
            }
            FUN_004fdba0(param_1);
            if (*(int *)(param_1 + 0x34) != 0) {
              FUN_00498820(param_1,local_14,local_10);
            }
          }
        }
        else if ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0) {
          FUN_004fd5f0(param_1,pHVar8,uVar1,local_14,local_10);
          iVar7 = *(int *)(param_1 + 0x4a0);
        }
        else {
          FUN_004fe000(pHVar8,param_1 + 0x4b0,0xffffffff);
        }
      }
      else {
        local_34[0].x = local_14;
        local_34[0].y = local_10;
        ScreenToClient(pHVar8,local_34);
        if ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0) {
          FUN_004fd800(param_1,pHVar8,uVar1,local_14,local_10);
          iVar7 = *(int *)(param_1 + 0x4a0);
        }
        else {
          iVar7 = 0xc;
          iVar6 = *(int *)(param_1 + 0x4a8);
          if (*(int *)(param_1 + 0x4a8) <= local_34[0].y) {
            local_34[0].x = 2;
            wParam = SendMessageA(pHVar8,0x1012,0,(LPARAM)local_34);
            if (wParam == 0xffffffff) {
              iVar6 = *(int *)(param_1 + 0x4ac);
            }
            else {
              if (&stack0x00000000 == (undefined1 *)0x44) {
                lParam = (tagRECT *)0x0;
              }
              else {
                local_44.left = 1;
                lParam = &local_44;
              }
              SendMessageA(pHVar8,0x100e,wParam,(LPARAM)lParam);
              iVar6 = local_44.top;
            }
          }
          local_44.top = iVar6;
          FUN_004fe000(pHVar8,param_1 + 0x4b0,local_44.top);
        }
      }
      if (((*(byte *)(param_1 + 0x4a4) & 0x10) == 0) &&
         (local_c = *(int *)(param_1 + 0x498), local_c != 0)) {
        local_1c = *(WPARAM *)(param_1 + 0x2c);
        local_8 = *(undefined4 *)(param_1 + 0x3c);
        local_18 = 0x15;
        local_20 = hWnd;
        SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_1c,(LPARAM)&local_20);
      }
      *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 0x10;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
      FUN_004fe000(pHVar8,param_1 + 0x4b0,0xffffffff);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      if ((*(byte *)(param_1 + 0x4a4) & 0x10) != 0) {
        ImageList_DragShowNolock(0);
      }
      FUN_00498870(param_1,local_14,local_10);
    }
    local_c = *(int *)(param_1 + 0x498);
    if (((*(byte *)(param_1 + 0x4a4) & 0x10) != 0) && (local_c != 0)) {
      local_8 = *(undefined4 *)(param_1 + 0x3c);
      local_1c = *(WPARAM *)(param_1 + 0x2c);
      local_18 = 0x14;
      local_20 = hWnd;
      SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_1c,(LPARAM)&local_20);
    }
    uVar4 = *(uint *)(param_1 + 0x4a4);
    *(uint *)(param_1 + 0x4a4) = uVar4 & 0xffffffef;
    if ((uVar4 & 8) != 0) {
      FUN_004fdba0(param_1);
    }
    if (local_c == 0) {
      iVar7 = 0x7f88;
    }
    else {
      local_1c = *(WPARAM *)(param_1 + 0x2c);
      local_18 = 2;
      if ((*(byte *)(param_1 + 0x4a4) & 2) != 0) {
        local_18 = 7;
      }
      local_8 = *(undefined4 *)(param_1 + 0x3c);
      local_20 = hWnd;
      iVar7 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_1c,(LPARAM)&local_20);
    }
  }
  if (iVar7 != *(int *)(param_1 + 0x4a0)) {
    *(int *)(param_1 + 0x4a0) = iVar7;
    hCursor = (HCURSOR)_SfGetUICursor_4(iVar7);
    SetCursor(hCursor);
  }
  return 0;
}


