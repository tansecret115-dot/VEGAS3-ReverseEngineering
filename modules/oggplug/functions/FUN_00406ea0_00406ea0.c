/* Module: oggplug.dll
   Function: FUN_00406ea0
   Address: 00406ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406ea0(int param_1)

{
  uint uVar1;
  uint lParam;
  HWND hWnd;
  WPARAM wParam;
  uint *local_120;
  int local_11c;
  WPARAM local_118;
  uint local_10c [2];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d4);
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 4);
  local_10c[0] = 0xac44;
  local_10c[1] = 48000;
  SendMessageA(hWnd,0x14b,0,0);
  local_120 = local_10c;
  local_118 = 0;
  local_11c = 2;
  do {
    lParam = *local_120;
    if (lParam <= *(uint *)(param_1 + 0x3c)) {
      FUN_00410930(local_104,(BYTE *)"$u Hz");
      wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
      SendMessageA(hWnd,0x151,wParam,lParam);
      if (uVar1 == lParam) {
        local_118 = wParam;
      }
    }
    local_120 = local_120 + 1;
    local_11c = local_11c + -1;
  } while (local_11c != 0);
  SendMessageA(hWnd,0x14e,local_118,0);
  return;
}


