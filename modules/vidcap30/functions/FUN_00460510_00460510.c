/* Module: vidcap30.exe
   Function: FUN_00460510
   Address: 00460510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460510(HWND param_1,undefined4 *param_2)

{
  undefined1 local_20 [32];
  
  SetWindowLongA(param_1,8,(LONG)param_2);
  _SfWndCenter_16(param_1,0,0,0x8001);
  SetWindowTextA(param_1,(LPCSTR)param_2[8]);
  SfSetDlgItemText(param_1,0x50f,param_2[9]);
  local_20[0] = 0;
  FUN_0045aec0(*param_2,param_2[1],param_2[6],param_2[7],local_20,0x1e);
  SfSetDlgItemText(param_1,0x9c44,local_20);
  return;
}


