/* Module: vidcap30.exe
   Function: FUN_0041c170
   Address: 0041c170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c170(HWND param_1,int *param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0x12d4) = DAT_005b3dd4;
  *(undefined4 *)(*param_2 + 0xfd0) = DAT_005b3ad0;
  *(undefined4 *)(*param_2 + 0x12b8) = DAT_005b3db8;
  *(undefined4 *)(*param_2 + 0x12bc) = DAT_005b3dbc;
  FUN_00418370(param_1,*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_0041bd70(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


