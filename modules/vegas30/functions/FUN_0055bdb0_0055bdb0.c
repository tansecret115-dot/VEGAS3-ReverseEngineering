/* Module: vegas30.exe
   Function: FUN_0055bdb0
   Address: 0055bdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055bdb0(HWND param_1,int *param_2)

{
  UINT UVar1;
  HWND hWnd;
  LPARAM lParam;
  
  UVar1 = IsDlgButtonChecked(param_1,0x5dd);
  *(UINT *)(*param_2 + 0x2e5c) = UVar1;
  FUN_0055bc60(param_1,param_2);
  lParam = 0;
  UVar1 = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,UVar1,(WPARAM)param_1,lParam);
  param_2[0x1a] = 1;
  return;
}


