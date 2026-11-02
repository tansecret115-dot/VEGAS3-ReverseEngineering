/* Module: vidcap30.exe
   Function: FUN_004fdba0
   Address: 004fdba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fdba0(int param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  WPARAM wParam;
  undefined1 local_28 [12];
  uint local_1c;
  undefined4 local_18;
  
  if (param_1 != 0) {
    hWnd = *(HWND *)(param_1 + 0x18);
    hWnd_00 = *(HWND *)(param_1 + 0x1c);
    if (hWnd_00 != (HWND)0x0) {
      for (wParam = SendMessageA(hWnd_00,0x100c,0xffffffff,8); -1 < (int)wParam;
          wParam = SendMessageA(hWnd_00,0x100c,wParam,8)) {
        local_18 = 0xf;
        local_1c = SendMessageA(hWnd_00,0x102c,wParam,0xf);
        local_1c = local_1c & 0xfffffff7;
        SendMessageA(hWnd_00,0x102b,wParam,(LPARAM)local_28);
        FUN_004fda70(hWnd_00,wParam);
      }
    }
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x110b,8,0);
    }
    *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffff7;
  }
  return;
}


