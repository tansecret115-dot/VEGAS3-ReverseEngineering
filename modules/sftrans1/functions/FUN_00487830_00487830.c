/* Module: sftrans1.dll
   Function: FUN_00487830
   Address: 00487830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00487830(HWND param_1,wchar_t *param_2)

{
  size_t sVar1;
  UINT Msg;
  WPARAM wParam;
  wchar_t ***lParam;
  wchar_t **local_18;
  undefined4 local_14;
  undefined1 *local_10;
  wchar_t *local_c;
  int local_8;
  undefined4 local_4;
  
  if (param_2 != (wchar_t *)0x0) {
    local_18 = (wchar_t **)0x0;
    local_c = param_2;
    local_14 = 0;
    local_10 = (undefined1 *)0x0;
    sVar1 = wcslen(param_2);
    local_8 = sVar1 * 2 + 2;
    local_4 = 0;
    if (local_8 < 1) {
      lParam = (wchar_t ***)0x0;
      wParam = 0;
      Msg = 0xc;
    }
    else {
      lParam = &local_18;
      local_18 = &local_c;
      wParam = 0x11;
      local_14 = 0;
      local_10 = &LAB_004878c0;
      Msg = 0x449;
    }
    SendMessageA(param_1,Msg,wParam,(LPARAM)lParam);
    SendMessageA(param_1,0xb9,0,0);
  }
  return 0;
}


