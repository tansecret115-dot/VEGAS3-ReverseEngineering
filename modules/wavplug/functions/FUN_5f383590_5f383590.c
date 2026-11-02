/* Module: wavplug.dll
   Function: FUN_5f383590
   Address: 5f383590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f383590(void *this,int param_1,int param_2,int param_3)

{
  uint lParam;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  WPARAM WVar1;
  uint *puVar2;
  uint local_234;
  WPARAM local_230;
  int local_21c;
  uint local_218 [4];
  uchar local_208 [260];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  hWnd_00 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  hWnd_01 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  SendMessageA(hWnd_00,0x14b,0,0);
  SendMessageA(hWnd_01,0x14b,0,0);
  if (param_1 != 0) {
    EnableWindow(hWnd_01,0);
    EnableWindow(hWnd,0);
    EnableWindow(hWnd_00,0);
    return;
  }
  local_234 = 0xac44;
  if (param_3 != 0) {
    local_234 = *(uint *)(param_3 + 4);
  }
  local_230 = 0;
  puVar2 = &DAT_5f3ca630;
  do {
    if (*puVar2 <= *(uint *)((int)this + 0x3c)) {
      FUN_5f39c1a0(local_208,"$u");
      WVar1 = SendMessageA(hWnd,0x143,0,(LPARAM)local_208);
      SendMessageA(hWnd,0x151,WVar1,*puVar2);
      if (local_234 == *puVar2) {
        local_230 = WVar1;
      }
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5f3ca65c);
  SendMessageA(hWnd,0x14e,local_230,0);
  local_234 = 0x10;
  if (param_3 != 0) {
    local_234 = (uint)*(ushort *)(param_3 + 0xe);
  }
  puVar2 = local_218;
  local_218[0] = 8;
  local_218[1] = 0x10;
  local_218[2] = 0x18;
  local_218[3] = 0x20;
  local_230 = 0;
  local_21c = 4;
  do {
    if ((param_2 == 0) || (0x1f < *puVar2)) {
      lParam = *puVar2;
      if ((lParam <= *(uint *)((int)this + 0x40)) ||
         ((0x17 < *(uint *)((int)this + 0x40) && (param_2 != 0)))) {
        FUN_5f39c1a0(local_104,"%d");
        WVar1 = SendMessageA(hWnd_00,0x143,0,(LPARAM)local_104);
        SendMessageA(hWnd_00,0x151,WVar1,lParam);
        if (local_234 == lParam) {
          local_230 = WVar1;
        }
      }
    }
    puVar2 = puVar2 + 1;
    local_21c = local_21c + -1;
  } while (local_21c != 0);
  SendMessageA(hWnd_00,0x14e,local_230,0);
  FUN_5f383d60((int)this);
  EnableWindow(hWnd_01,1);
  EnableWindow(hWnd,1);
  EnableWindow(hWnd_00,1);
  return;
}


