/* Module: vidcap30.exe
   Function: FUN_00509220
   Address: 00509220
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00509220(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  GetWindowLongA(param_1,0);
  if (param_2 == 1) {
    iVar2 = FUN_005091c0(param_1,param_4);
    return (iVar2 != 0) - 1;
  }
  if (param_2 == 2) {
    FUN_00509200(param_1);
  }
  else if ((param_2 == 0x100) && (param_3 == 0x1b)) {
    lParam = 0;
    wParam = 2;
    Msg = 0x111;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
    LVar1 = DefWindowProcA(param_1,0x100,0x1b,param_4);
    return LVar1;
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


