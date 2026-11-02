/* Module: vegas30.exe
   Function: FUN_0042a4c0
   Address: 0042a4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042a4c0(undefined4 param_1,undefined4 param_2)

{
  HWND pHVar1;
  HWND hWnd;
  int iVar2;
  undefined4 local_4;
  
  if (DAT_0064bc28 != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return 0x8004e00c;
  }
  DAT_0064bc28 = 1;
  local_4 = 0;
  pHVar1 = GetFocus();
  hWnd = (HWND)_SfCreateDialogParam_20(DAT_00647204,0x2279,param_1,&LAB_0042a580,param_2);
  if (hWnd == (HWND)0x0) {
    return 0x8004e00f;
  }
  _SfWndCenter_16(hWnd,0,0,0x8001);
  ShowWindow(hWnd,1);
  iVar2 = FUN_00403d90(hWnd,0,0,0,&local_4,pHVar1);
  DAT_0064bc28 = 0;
  return -(uint)(iVar2 != 1) & 0x8004e00c;
}


