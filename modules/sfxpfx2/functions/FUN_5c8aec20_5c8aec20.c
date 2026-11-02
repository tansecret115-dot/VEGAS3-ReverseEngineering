/* Module: sfxpfx2.dll
   Function: FUN_5c8aec20
   Address: 5c8aec20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8aec20(undefined4 param_1,uint param_2,HWND param_3,int param_4,int param_5)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  LONG LVar4;
  int lParam;
  
  LVar1 = SendMessageA(param_3,0x60b,0,0);
  LVar2 = SendMessageA(param_3,0x60c,0,0);
  LVar3 = SendMessageA(param_3,0x60a,0,0);
  LVar4 = GetWindowLongA(param_3,0);
  lParam = FUN_5c8ae4f0(param_2 & 0xffff,LVar3,LVar1,LVar2,param_4,param_5,
                        (*(int *)(LVar4 + 0xc) << 0x1c) >> 0x1f);
  SendMessageA(param_3,0x610,1,lParam);
  return;
}


