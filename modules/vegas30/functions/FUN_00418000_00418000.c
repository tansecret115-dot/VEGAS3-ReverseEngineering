/* Module: vegas30.exe
   Function: FUN_00418000
   Address: 00418000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418000(int param_1,int param_2)

{
  uint lParam;
  
  lParam = -(uint)(param_2 != 0) & 4;
  SendMessageA(*(HWND *)(param_1 + 600),0x411,0x194,lParam);
  SendMessageA(*(HWND *)(param_1 + 600),0x411,0x195,lParam);
  return;
}


