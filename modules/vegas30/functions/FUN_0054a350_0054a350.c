/* Module: vegas30.exe
   Function: FUN_0054a350
   Address: 0054a350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054a350(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 0x98),0x41a,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x98),0x430,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x98),0x422,0xffffffff,0xffff);
  return;
}


