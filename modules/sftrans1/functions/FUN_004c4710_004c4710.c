/* Module: sftrans1.dll
   Function: FUN_004c4710
   Address: 004c4710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c4710(undefined4 param_1,undefined2 param_2,HWND param_3,undefined4 param_4,
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
  lParam = FUN_004c3fe0(param_2,LVar3,LVar1,LVar2,param_4,param_5,
                        (*(int *)(LVar4 + 0xc) << 0x1c) >> 0x1f);
  SendMessageA(param_3,0x610,1,lParam);
  return;
}


