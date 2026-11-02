/* Module: vidcap30.exe
   Function: FUN_0041a160
   Address: 0041a160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a160(int *param_1,HWND param_2)

{
  HWND hWnd;
  UINT UVar1;
  HWND wParam;
  LPARAM lParam;
  undefined4 local_28;
  undefined4 local_24;
  CHAR local_20 [32];
  
  hWnd = GetDlgItem(param_2,0x9c55);
  local_28 = 0x9c54;
  local_24 = 0x9c55;
  CheckDlgButton(param_2,0x9c53,*(UINT *)(*param_1 + 0x460));
  UVar1 = IsDlgButtonChecked(param_2,0x9c53);
  _SfDlgEnableControls_16(param_2,&local_28,2,UVar1);
  _SfLongToText_12(*(undefined4 *)(*param_1 + 0x468),local_20,0);
  SetDlgItemTextA(param_2,0x9c54,local_20);
  lParam = 9;
  wParam = GetDlgItem(param_2,0x9c54);
  SendMessageA(hWnd,0x624,(WPARAM)wParam,lParam);
  SendMessageA(hWnd,0x60e,0,1);
  SendMessageA(hWnd,0x60f,0,9);
  return;
}


