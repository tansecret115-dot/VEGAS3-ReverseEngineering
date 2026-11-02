/* Module: vegas30.exe
   Function: FUN_004524b0
   Address: 004524b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004524b0(HWND param_1,int param_2,undefined4 param_3,LPCSTR param_4)

{
  if (param_2 == 0x110) {
    _SfWndCenter_16(param_1,0,0,0x8001);
    SetDlgItemTextA(param_1,0x3e9,param_4);
  }
  return param_2 == 0x110;
}


