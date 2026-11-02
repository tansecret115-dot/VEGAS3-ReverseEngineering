/* Module: sctplug.dll
   Function: FUN_004035d0
   Address: 004035d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004035d0(int param_1)

{
  ushort uVar1;
  uint lParam;
  HWND hWnd;
  WPARAM wParam;
  uint *local_12c;
  int local_128;
  WPARAM local_124;
  uint local_118 [5];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d5);
  uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0xe);
  local_118[0] = 8;
  local_118[1] = 0x10;
  local_118[2] = 0x18;
  local_118[3] = 0x20;
  local_118[4] = 0x40;
  SendMessageA(hWnd,0x14b,0,0);
  local_12c = local_118;
  local_124 = 0;
  local_128 = 5;
  do {
    lParam = *local_12c;
    if (lParam <= *(uint *)(param_1 + 0x40)) {
      FUN_00412100(local_104,"%d");
      wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
      SendMessageA(hWnd,0x151,wParam,lParam);
      if (uVar1 == lParam) {
        local_124 = wParam;
      }
    }
    local_12c = local_12c + 1;
    local_128 = local_128 + -1;
  } while (local_128 != 0);
  SendMessageA(hWnd,0x14e,local_124,0);
  return;
}


