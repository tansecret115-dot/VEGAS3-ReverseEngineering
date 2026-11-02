/* Module: vegas30.exe
   Function: FUN_004926b0
   Address: 004926b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004926b0(int param_1)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(param_1 + 0x8c);
  SendMessageA(hWnd,0x436,0,DAT_0064b330);
  SendMessageA(hWnd,0x434,0,DAT_0064b32c);
  SendMessageA(hWnd,0x430,0,DAT_0064b328);
  return;
}


