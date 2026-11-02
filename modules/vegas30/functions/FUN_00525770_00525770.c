/* Module: vegas30.exe
   Function: FUN_00525770
   Address: 00525770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00525770(int param_1,WPARAM param_2)

{
  *(WPARAM *)(param_1 + 0xec) = param_2;
  SendMessageA(*(HWND *)(param_1 + 0xdc),0x602,param_2,0);
  FUN_00524ad0(param_1);
  return;
}


