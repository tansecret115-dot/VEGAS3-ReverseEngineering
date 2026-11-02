/* Module: vegas30.exe
   Function: FUN_004e9500
   Address: 004e9500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e9500(HWND param_1,LONG *param_2)

{
  HWND hWnd;
  uint uVar1;
  WPARAM wParam;
  int iVar2;
  HWND hWnd_00;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_d4;
  uint local_c8;
  tagRECT local_c4;
  int local_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  tagRECT local_a0;
  int local_8c;
  int local_84;
  undefined1 local_80 [128];
  
  local_a8 = DAT_0064b138;
  local_d4 = 0;
  FUN_005b8630(DAT_0064b138);
  FUN_005b42d0();
  hWnd = GetDlgItem(param_1,0x435);
  iVar4 = 0;
  if (hWnd != (HWND)0x0) {
    local_b0 = (int *)_SfGetUIFontSize_4(100);
    local_ac = _SfGetUIFont_4(100);
    local_a4 = GetSystemMetrics(2);
    local_b4 = GetSystemMetrics(0x2d);
    SendMessageA(hWnd,0x184,0,0);
    uVar1 = FUN_005b51d0();
    GetWindowRect(hWnd,&local_a0);
    LVar3 = local_a0.left;
    local_8c = local_a0.top;
    local_84 = local_a0.bottom;
    local_c8 = 0;
    iVar4 = local_a0.right;
    if (uVar1 != 0) {
      do {
        local_d4 = FUN_005b7c00(local_c8,local_80,0x80);
        if (local_d4 < 0) goto LAB_004e97ca;
        wParam = SendMessageA(hWnd,0x180,0,(LPARAM)local_80);
        _SfGetTextExtent_16(local_ac,local_80,0xffffffff,&local_c4);
        iVar2 = *local_b0 + local_b4 * 2 + local_c4.left + local_a4;
        if (iVar4 - LVar3 < iVar2) {
          iVar4 = LVar3 + iVar2;
        }
        SendMessageA(hWnd,0x19a,wParam,0);
        local_c8 = local_c8 + 1;
      } while (local_c8 < uVar1);
    }
    iVar2 = ((local_a0.left - local_a0.right) - LVar3) + iVar4;
    if (0 < iVar2) {
      GetWindowRect(param_1,&local_c4);
      local_c4.right = local_c4.right + iVar2;
      SetWindowPos(param_1,(HWND)0x0,local_c4.left,local_c4.top,local_c4.right - local_c4.left,
                   local_c4.bottom - local_c4.top,6);
      SetWindowPos(hWnd,(HWND)0x0,LVar3,local_8c,iVar4 - LVar3,local_84 - local_8c,6);
      hWnd_00 = GetDlgItem(param_1,0x475);
      GetWindowRect(hWnd_00,&local_c4);
      local_c4.right = local_c4.right + iVar2;
      SetWindowPos(hWnd_00,(HWND)0x0,local_c4.left,local_c4.top,local_c4.right - local_c4.left,
                   local_c4.bottom - local_c4.top,6);
    }
    SendMessageA(hWnd,0x185,1,0);
    uVar7 = 1;
    if (param_2[1] == 0x9d08) {
      uVar5 = 0x10e;
    }
    else {
      uVar5 = 0x110;
    }
    uVar5 = _SfGetString_8(DAT_00647204,uVar5);
    SfSetDlgItemText(param_1,0x475,uVar5,uVar7);
    LVar3 = SetWindowLongA(hWnd,-4,0x4e9800);
    *param_2 = LVar3;
    iVar4 = local_d4;
    if (local_d4 < 0) {
LAB_004e97ca:
      uVar7 = FUN_004e9cb0(local_a8,local_d4);
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = _SfErrorHandler_GetLastError_0(0,0);
      _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,uVar7,uVar5,uVar6,uVar8);
      iVar4 = local_d4;
    }
  }
  return iVar4;
}


