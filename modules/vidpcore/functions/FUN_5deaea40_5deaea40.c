/* Module: vidpcore.dll
   Function: FUN_5deaea40
   Address: 5deaea40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deaea40(undefined4 param_1,short param_2,HWND param_3,undefined4 param_4,
                 undefined4 param_5,LPARAM param_6)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  LONG LVar4;
  LPARAM lParam;
  
  LVar1 = SendMessageA(param_3,0x60b,0,0);
  LVar2 = SendMessageA(param_3,0x60c,0,0);
  LVar3 = SendMessageA(param_3,0x60a,0,0);
  if ((param_2 != 8) && (param_2 != 9)) {
    LVar4 = GetWindowLongA(param_3,0);
    lParam = FUN_5deae930(param_2,LVar3,LVar1,LVar2,param_4,param_5,*(undefined4 *)(LVar4 + 0x1c));
    SendMessageA(param_3,0x610,1,lParam);
    return;
  }
  SendMessageA(param_3,0x610,1,param_6);
  return;
}


