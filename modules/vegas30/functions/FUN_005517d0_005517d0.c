/* Module: vegas30.exe
   Function: FUN_005517d0
   Address: 005517d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005517d0(int param_1)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(param_1 + 0x90);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x434,0,DAT_0064b32c);
    SendMessageA(hWnd,0x430,0,DAT_0064b328);
  }
  return;
}


