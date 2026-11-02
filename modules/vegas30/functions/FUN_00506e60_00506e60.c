/* Module: vegas30.exe
   Function: FUN_00506e60
   Address: 00506e60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00506e60(undefined4 param_1,undefined4 param_2,LPCSTR param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  HWND pHVar1;
  HWND hWnd;
  int iVar2;
  tagRECT local_3c;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_4;
  
  if (DAT_0064e518 != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return false;
  }
  local_24 = param_6;
  local_20 = param_1;
  local_28 = param_2;
  local_18 = param_5;
  local_1c = param_4;
  local_4 = 0;
  DAT_0064e518 = 1;
  param_1 = 0;
  if (DAT_0064763c != 0) {
    return false;
  }
  pHVar1 = GetFocus();
  hWnd = (HWND)_SfCreateDialogParam_20(DAT_00647204,0x30d,param_7,&LAB_00506b90,local_2c);
  if (hWnd == (HWND)0x0) {
    return false;
  }
  if ((DAT_00648820 != 0) || (DAT_00648824 != 0)) {
    SetWindowPos(hWnd,(HWND)0x0,0,0,DAT_00648820,DAT_00648824,0x16);
  }
  _SfWndCenter_16(hWnd,0,0,0x8001);
  SetWindowTextA(hWnd,param_3);
  ShowWindow(hWnd,1);
  GetClientRect(hWnd,&local_3c);
  FUN_00506760(local_2c,0,local_3c.right,local_3c.bottom);
  iVar2 = FUN_00403d90(hWnd,0,0,param_8,&param_1,pHVar1);
  DAT_0064e518 = 0;
  return iVar2 == 1;
}


