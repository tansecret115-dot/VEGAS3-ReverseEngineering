/* Module: vegas30k.dll
   Function: FUN_01131560
   Address: 01131560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01131560(HWND param_1,int param_2,int param_3)

{
  int lParam;
  LRESULT LVar1;
  
  if (param_3 == -0x10000) {
    SendMessageA(param_1,0x110b,9,0);
    SendMessageA(param_1,0x1101,0,-0x10000);
    return;
  }
  lParam = SendMessageA(param_1,0x110a,4,param_3);
  while (lParam != 0) {
    FUN_01131560(param_1,param_2,lParam);
    LVar1 = SendMessageA(param_1,0x110a,1,lParam);
    if (lParam == param_2) {
      SendMessageA(param_1,0x110b,9,0);
    }
    SendMessageA(param_1,0x1101,0,lParam);
    lParam = LVar1;
  }
  return;
}


