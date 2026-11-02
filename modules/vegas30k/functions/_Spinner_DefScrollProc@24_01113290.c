/* Module: vegas30k.dll
   Function: _Spinner_DefScrollProc@24
   Address: 01113290
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Spinner_DefScrollProc_24
               (undefined4 param_1,short param_2,HWND param_3,undefined4 param_4,undefined4 param_5,
               LPARAM param_6)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  LONG LVar4;
  LPARAM lParam;
  
                    /* 0x113290  1335  _Spinner_DefScrollProc@24 */
  LVar1 = SendMessageA(param_3,0x60b,0,0);
  LVar2 = SendMessageA(param_3,0x60c,0,0);
  LVar3 = SendMessageA(param_3,0x60a,0,0);
  if ((param_2 != 8) && (param_2 != 9)) {
    LVar4 = GetWindowLongA(param_3,0);
    lParam = FUN_01113180(param_2,LVar3,LVar1,LVar2,param_4,param_5,*(undefined4 *)(LVar4 + 0x1c));
    SendMessageA(param_3,0x610,1,lParam);
    return;
  }
  SendMessageA(param_3,0x610,1,param_6);
  return;
}


