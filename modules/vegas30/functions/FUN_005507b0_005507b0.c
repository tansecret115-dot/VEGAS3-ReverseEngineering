/* Module: vegas30.exe
   Function: FUN_005507b0
   Address: 005507b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005507b0(int param_1,int param_2)

{
  SHORT SVar1;
  SHORT SVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  HCURSOR hCursor;
  HCURSOR pHVar6;
  HWND pHVar7;
  LRESULT LVar8;
  LPCSTR lpString;
  WPARAM wParam;
  int local_2c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = 0;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff65:
    SVar1 = GetKeyState(0x11);
    SVar2 = GetKeyState(0x10);
    switch(*(undefined2 *)(param_2 + 0xc)) {
    case 0xd:
      iVar3 = FUN_0054d830(param_1);
      if (-1 < iVar3) {
        if (DAT_00649cec == 0) {
          FUN_004ec630(*(undefined4 *)(param_1 + 0xb8),0,0,0);
        }
        else {
          FUN_0054d210(*(undefined4 *)(param_1 + 0xb8));
        }
        FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      break;
    case 0x1b:
      if (*(int *)(param_1 + 0xbc) != 0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
        SendMessageA(*(HWND *)(param_1 + 0x8c),0x1f,0,0);
        pHVar7 = GetCapture();
        if (pHVar7 == *(HWND *)(param_1 + 0x8c)) {
          ReleaseCapture();
        }
      }
      break;
    case 0x2e:
      iVar3 = FUN_0054e120(param_1,0);
      if (iVar3 < 0) {
        if (iVar3 == -0x7ff8fff2) {
          uVar5 = _SfGetString_8(DAT_00647204,0x6e4d);
          SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x1010,uVar5);
        }
        else {
          uVar5 = _SfGetString_8(DAT_00647204,0x6e4e);
          SfMsgBox(*(undefined4 *)(param_1 + 0x8c),0x10,uVar5);
        }
      }
      break;
    case 0x41:
      if (SVar1 < 0) {
        LVar8 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1004,0,0);
        wParam = 0;
        if (0 < LVar8) {
          do {
            local_18 = 2;
            local_1c = 2;
            SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,wParam,(LPARAM)local_28);
            wParam = wParam + 1;
          } while ((int)wParam < LVar8);
        }
      }
      break;
    case 0x5a:
    case 0x7a:
      if (SVar1 < 0) {
        if (SVar2 < 0) {
          SendMessageA(DAT_00647624,0x111,0x9d09,0);
        }
        else {
          SendMessageA(DAT_00647624,0x111,0x9d08,0);
        }
      }
    }
    InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
    return 0;
  case 0xffffff6a:
    *(undefined4 *)(param_2 + 0xc) = 1;
    lpString = (LPCSTR)FUN_0054b2c0(0);
    *(LPCSTR *)(param_2 + 0x20) = lpString;
    iVar3 = lstrlenA(lpString);
    *(int *)(param_2 + 0x24) = iVar3;
    break;
  case 0xffffff91:
  case 0xffffff93:
    FUN_0054d650(param_1);
    iVar3 = FUN_0054d830(param_1);
    if (iVar3 < 0) {
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    local_2c = FUN_0040c3e0(DAT_0064762c,*(undefined4 *)(param_1 + 0xb8),5);
    if (local_2c == 0) {
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 1;
    if (*(int *)(param_2 + 8) == -0x6d) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    SetCapture(*(HWND *)(param_1 + 0x8c));
    SetFocus(*(HWND *)(param_1 + 0x9c));
    DVar4 = GetMessagePos();
    uVar5 = FUN_0040c4b0(DAT_0064762c,*(undefined4 *)(param_1 + 0xb8),(int)(short)DVar4,
                         (int)(short)(DVar4 >> 0x10));
    hCursor = (HCURSOR)_SfGetUICursor_4(uVar5);
    pHVar6 = GetCursor();
    if (pHVar6 != hCursor) {
      SetCursor(hCursor);
      return local_2c;
    }
    break;
  case 0xffffff9b:
    if (DAT_006577fc == 0) {
      if (*(int *)(param_1 + 0x88) != 0) {
        FUN_0054f260(param_1);
      }
      FUN_0054d0c0(param_1);
      return 0;
    }
    break;
  case 0xfffffff4:
    iVar3 = FUN_0054d940(param_1,param_2);
    return iVar3;
  case 0xfffffff8:
    FUN_0054d650(param_1);
    return 0;
  case 0xfffffff9:
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_0054f260(param_1);
      return 0;
    }
    break;
  case 0xfffffffb:
    FUN_0054d400(param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    return 0;
  case 0xfffffffd:
    iVar3 = FUN_0054d830(param_1);
    if (-1 < iVar3) {
      if (DAT_00649cec == 0) {
        FUN_004ec630(*(undefined4 *)(param_1 + 0xb8),0,0,0);
      }
      else {
        FUN_0054d210(*(undefined4 *)(param_1 + 0xb8));
      }
      FUN_004ec820(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    break;
  case 0xfffffffe:
    InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
    return 0;
  }
  return local_2c;
}


