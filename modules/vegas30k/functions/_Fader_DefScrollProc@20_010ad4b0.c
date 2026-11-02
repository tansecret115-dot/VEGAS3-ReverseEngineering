/* Module: vegas30k.dll
   Function: _Fader_DefScrollProc@20
   Address: 010ad4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Fader_DefScrollProc_20
               (undefined4 param_1,undefined2 param_2,HWND param_3,undefined4 param_4,
               undefined4 param_5)

{
  LRESULT LVar1;
  LONG LVar2;
  LPARAM lParam;
  
                    /* 0xad4b0  664  _Fader_DefScrollProc@20 */
  SendMessageA(param_3,0x60b,0,0);
  SendMessageA(param_3,0x60c,0,0);
  LVar1 = SendMessageA(param_3,0x60a,0,0);
  LVar2 = GetWindowLongA(param_3,0);
  lParam = FUN_010ad530(LVar2,param_2,LVar1,param_4,param_5);
  SendMessageA(param_3,0x62f,0x10001,lParam);
  return;
}


