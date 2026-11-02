/* Module: vegas30.exe
   Function: FUN_0043c0e0
   Address: 0043c0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c0e0(HWND param_1)

{
  if (param_1 != (HWND)0x0) {
    SendMessageA(param_1,0x436,0,0);
    SendMessageA(param_1,0x434,0,0);
    SendMessageA(param_1,0x430,0,0);
    DestroyWindow(param_1);
  }
  return;
}


