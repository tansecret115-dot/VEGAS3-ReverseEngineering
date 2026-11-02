/* Module: sftrkfx1.dll
   Function: FUN_5cbd40d0
   Address: 5cbd40d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd40d0(undefined4 param_1,uint param_2,HWND param_3,int param_4,int param_5)

{
  LRESULT LVar1;
  LONG LVar2;
  int lParam;
  
  SendMessageA(param_3,0x60b,0,0);
  SendMessageA(param_3,0x60c,0,0);
  LVar1 = SendMessageA(param_3,0x60a,0,0);
  LVar2 = GetWindowLongA(param_3,0);
  lParam = FUN_5cbd4150(LVar2,param_2 & 0xffff,LVar1,param_4,param_5);
  SendMessageA(param_3,0x62f,0x10001,lParam);
  return;
}


