/* Module: vidpcore.dll
   Function: FUN_5deb35b0
   Address: 5deb35b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb35b0(undefined4 param_1,undefined2 param_2,HWND param_3,undefined4 param_4,
                 undefined4 param_5)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  LONG LVar4;
  LPARAM lParam;
  
  LVar1 = SendMessageA(param_3,0x60b,0,0);
  LVar2 = SendMessageA(param_3,0x60c,0,0);
  LVar3 = SendMessageA(param_3,0x60a,0,0);
  LVar4 = GetWindowLongA(param_3,0);
  lParam = FUN_5deb2e80(param_2,LVar3,LVar1,LVar2,param_4,param_5,
                        (*(int *)(LVar4 + 0xc) << 0x1c) >> 0x1f);
  SendMessageA(param_3,0x610,1,lParam);
  return;
}


