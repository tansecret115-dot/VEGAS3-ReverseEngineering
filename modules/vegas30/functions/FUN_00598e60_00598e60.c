/* Module: vegas30.exe
   Function: FUN_00598e60
   Address: 00598e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00598e60(undefined4 *param_1)

{
  HWND hWnd;
  
  _SfWndCenter_16(*param_1,0,0,0x8001);
  CheckDlgButton((HWND)*param_1,0x46f,(uint)(DAT_0064943c != 0));
  hWnd = GetDlgItem((HWND)*param_1,0x4a2);
  SetWindowTextA(hWnd,(LPCSTR)(param_1[1] + 0x480));
  FUN_00598cd0(param_1,1);
  return;
}


