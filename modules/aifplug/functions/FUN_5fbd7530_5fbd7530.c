/* Module: aifplug.dll
   Function: FUN_5fbd7530
   Address: 5fbd7530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd7530(int param_1)

{
  ushort uVar1;
  uint lParam;
  HWND hWnd;
  WPARAM wParam;
  uint *local_128;
  int local_124;
  WPARAM local_120;
  uint local_114 [4];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d5);
  uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0xe);
  local_114[0] = 8;
  local_114[1] = 0x10;
  local_114[2] = 0x18;
  local_114[3] = 0x20;
  SendMessageA(hWnd,0x14b,0,0);
  local_128 = local_114;
  local_120 = 0;
  local_124 = 4;
  do {
    lParam = *local_128;
    if (lParam <= *(uint *)(param_1 + 0x40)) {
      FUN_5fbe2c50(local_104,"%d");
      wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
      SendMessageA(hWnd,0x151,wParam,lParam);
      if (uVar1 == lParam) {
        local_120 = wParam;
      }
    }
    local_128 = local_128 + 1;
    local_124 = local_124 + -1;
  } while (local_124 != 0);
  SendMessageA(hWnd,0x14e,local_120,0);
  return;
}


