/* Module: vidcap30.exe
   Function: _Fader_DefScrollProc@20
   Address: 0051ff30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Fader_DefScrollProc_20
               (undefined4 param_1,undefined2 param_2,HWND param_3,undefined4 param_4,
               undefined4 param_5)

{
  LRESULT LVar1;
  LONG LVar2;
  LPARAM lParam;
  
                    /* 0x11ff30  167  _Fader_DefScrollProc@20 */
  SendMessageA(param_3,0x60b,0,0);
  SendMessageA(param_3,0x60c,0,0);
  LVar1 = SendMessageA(param_3,0x60a,0,0);
  LVar2 = GetWindowLongA(param_3,0);
  lParam = FUN_0051ffb0(LVar2,param_2,LVar1,param_4,param_5);
  SendMessageA(param_3,0x62f,0x10001,lParam);
  return;
}


