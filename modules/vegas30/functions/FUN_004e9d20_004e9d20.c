/* Module: vegas30.exe
   Function: FUN_004e9d20
   Address: 004e9d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e9d20(HWND param_1,WPARAM param_2,HWND param_3,int param_4)

{
  SendMessageA(param_1,0x19e,param_2,0);
  SendMessageA(param_3,0x111,0x10435,(LPARAM)param_1);
  *(WPARAM *)(param_4 + 8) = param_2;
  return;
}


