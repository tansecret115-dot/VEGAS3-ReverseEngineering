/* Module: vegas30.exe
   Function: FUN_0051ddc0
   Address: 0051ddc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051ddc0(int param_1,int param_2)

{
  HWND hWnd;
  WPARAM wParam;
  LPCSTR lpString;
  int lParam;
  int local_10c;
  int local_108;
  undefined1 local_104 [260];
  
  if (((param_1 == 0) || ((*(byte *)(param_1 + 0xa8) & 1) == 0)) || (*(int *)(param_1 + 0x98) == 0))
  {
    EnableWindow(*(HWND *)(param_1 + 0xf0),0);
    EnableWindow(*(HWND *)(param_1 + 0x108),0);
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffe;
  }
  else {
    hWnd = *(HWND *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x14b,0,0);
      local_10c = FUN_0051d430(*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x9c),&local_108);
      local_108 = local_108 + 5;
      if (((-1 < local_10c) && (0 < local_108)) && (lParam = 0, 0 < local_108)) {
        do {
          if (local_10c != 0) break;
          local_10c = FUN_0051d6b0(*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x9c),lParam,local_104
                                   ,0x104);
          if (-1 < local_10c) {
            wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
            SendMessageA(hWnd,0x151,wParam,lParam);
          }
          lParam = lParam + 1;
        } while (lParam < local_108);
      }
      if (param_2 == 0) {
        SendMessageA(*(HWND *)(param_1 + 0xf0),0x14e,0xffffffff,0);
        lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e28);
        SetWindowTextA(*(HWND *)(param_1 + 0xf0),lpString);
      }
      else {
        SendMessageA(*(HWND *)(param_1 + 0xf0),0x14d,0,param_2);
      }
      EnableWindow(*(HWND *)(param_1 + 0xf0),1);
      EnableWindow(*(HWND *)(param_1 + 0x108),1);
      *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 1;
      return local_10c;
    }
  }
  return 0;
}


