/* Module: sfpaplug.dll
   Function: FUN_00402360
   Address: 00402360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402360(int param_1)

{
  uint uVar1;
  uint lParam;
  HWND hWnd;
  WPARAM wParam;
  uint *local_144;
  int local_140;
  WPARAM local_13c;
  uint local_130 [11];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d4);
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 4);
  local_130[0] = 8000;
  local_130[1] = 0x2b11;
  local_130[2] = 0x5622;
  local_130[3] = 32000;
  local_130[4] = 0xac44;
  local_130[5] = 48000;
  local_130[6] = 0x15888;
  local_130[7] = 96000;
  local_130[8] = 0x2b110;
  local_130[9] = 0x2ee00;
  local_130[10] = 200000;
  SendMessageA(hWnd,0x14b,0,0);
  local_144 = local_130;
  local_13c = 0;
  local_140 = 0xb;
  do {
    lParam = *local_144;
    if (lParam <= *(uint *)(param_1 + 0x3c)) {
      FUN_00419320(local_104,"$u");
      wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
      SendMessageA(hWnd,0x151,wParam,lParam);
      if (uVar1 == lParam) {
        local_13c = wParam;
      }
    }
    local_144 = local_144 + 1;
    local_140 = local_140 + -1;
  } while (local_140 != 0);
  SendMessageA(hWnd,0x14e,local_13c,0);
  return;
}


