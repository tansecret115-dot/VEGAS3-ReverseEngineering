/* Module: vegas30.exe
   Function: FUN_004defe0
   Address: 004defe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004defe0(int param_1)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(param_1 + 0xf20);
  SendMessageA(hWnd,0x436,0,DAT_0064b330);
  SendMessageA(hWnd,0x434,0,DAT_0064b32c);
  SendMessageA(hWnd,0x430,0,DAT_0064b328);
  if (*(int *)(param_1 + 0x890) != 0) {
    FUN_00460410(param_1 + 0x80,param_1 + 0x890);
  }
  FUN_004530a0(param_1 + 0x80,0x7fff);
  return;
}


