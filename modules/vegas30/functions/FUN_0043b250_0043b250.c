/* Module: vegas30.exe
   Function: FUN_0043b250
   Address: 0043b250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b250(HWND param_1,WPARAM param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = SendMessageA(param_1,0x412,param_2,0);
  SendMessageA(param_1,0x411,param_2,uVar1 & 2 | param_3 & 0xffff);
  return;
}


