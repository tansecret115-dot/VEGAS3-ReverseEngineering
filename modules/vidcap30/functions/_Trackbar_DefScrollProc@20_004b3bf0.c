/* Module: vidcap30.exe
   Function: _Trackbar_DefScrollProc@20
   Address: 004b3bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Trackbar_DefScrollProc_20
               (undefined4 param_1,undefined2 param_2,HWND param_3,undefined4 param_4,
               undefined4 param_5)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  LONG LVar4;
  LPARAM lParam;
  
                    /* 0xb3bf0  738  _Trackbar_DefScrollProc@20 */
  LVar1 = SendMessageA(param_3,0x60b,0,0);
  LVar2 = SendMessageA(param_3,0x60c,0,0);
  LVar3 = SendMessageA(param_3,0x60a,0,0);
  LVar4 = GetWindowLongA(param_3,0);
  lParam = FUN_004b34c0(param_2,LVar3,LVar1,LVar2,param_4,param_5,
                        (*(int *)(LVar4 + 0xc) << 0x1c) >> 0x1f);
  SendMessageA(param_3,0x610,1,lParam);
  return;
}


