/* Module: vidcap30.exe
   Function: FUN_0041c8d0
   Address: 0041c8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c8d0(HWND param_1,int *param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0xf6c) = DAT_005b3a6c;
  *(undefined4 *)(*param_2 + 0xf70) = DAT_005b3a70;
  FUN_00418370(param_1,*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_0041c5a0(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


