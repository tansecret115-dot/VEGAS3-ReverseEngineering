/* Module: vegas30.exe
   Function: FUN_004f3980
   Address: 004f3980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f3980(HWND param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  UINT UVar1;
  HWND hWnd;
  undefined4 uVar2;
  UINT Msg;
  LPARAM lParam;
  
  if (param_3 == 0x41d) {
    uVar2 = FUN_004f38e0(param_1,param_5);
    return uVar2;
  }
  if (param_3 != 0x487) {
    return 1;
  }
  UVar1 = IsDlgButtonChecked(param_1,0x487);
  lParam = 0;
  Msg = 0x468;
  *(UINT *)(*param_5 + 0x1194) = UVar1;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_5[2] = 1;
  param_5[0x19] = 1;
  return 1;
}


