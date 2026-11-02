/* Module: vegas30.exe
   Function: FUN_0055e600
   Address: 0055e600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055e600(HWND param_1,LPARAM param_2,LPARAM param_3)

{
  WPARAM wParam;
  
  wParam = SendMessageA(param_1,0x14a,0xffffffff,param_2);
  SendMessageA(param_1,0x151,wParam,param_3);
  return;
}


