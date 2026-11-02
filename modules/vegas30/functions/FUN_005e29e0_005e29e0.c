/* Module: vegas30.exe
   Function: FUN_005e29e0
   Address: 005e29e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e29e0(HWND param_1,int *param_2)

{
  int lParam;
  HWND hWnd;
  LPARAM LVar1;
  WPARAM wParam;
  int *local_10;
  int local_c [3];
  
  hWnd = GetDlgItem(param_1,0x436);
  local_c[0] = 1;
  local_c[1] = 2;
  local_c[2] = 3;
  SendMessageA(hWnd,0x14b,0,0);
  LVar1 = _SfGetString_8(DAT_00647204,0x5268);
  SendMessageA(hWnd,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_00647204,0x5269);
  SendMessageA(hWnd,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_00647204,0x526a);
  SendMessageA(hWnd,0x143,0,LVar1);
  local_10 = local_c;
  wParam = 0;
  do {
    lParam = *local_10;
    SendMessageA(hWnd,0x151,wParam,lParam);
    if (*param_2 == lParam) {
      SendMessageA(hWnd,0x14e,wParam,0);
    }
    wParam = wParam + 1;
    local_10 = local_10 + 1;
  } while (wParam < 3);
  FUN_005e2950(param_1,param_2);
  return;
}


