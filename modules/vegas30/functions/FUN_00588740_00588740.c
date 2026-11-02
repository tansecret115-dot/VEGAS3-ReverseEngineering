/* Module: vegas30.exe
   Function: FUN_00588740
   Address: 00588740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00588740(int param_1)

{
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    SendMessageA(*(HWND *)(param_1 + 8),0x436,0,0);
    SendMessageA(*(HWND *)(param_1 + 8),0x434,0,0);
    SendMessageA(*(HWND *)(param_1 + 8),0x430,0,0);
    DestroyWindow(*(HWND *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


