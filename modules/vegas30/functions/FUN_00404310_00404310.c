/* Module: vegas30.exe
   Function: FUN_00404310
   Address: 00404310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00404310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 *param_6)

{
  HWND pHVar1;
  HWND hWnd;
  undefined4 uVar2;
  
  pHVar1 = GetFocus();
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (DAT_0064763c != 0) {
    return 0xffffffff;
  }
  hWnd = (HWND)_SfCreateDialogParam_20(DAT_00647204,param_1,DAT_00647624,param_2,param_3);
  if (hWnd == (HWND)0x0) {
    return 0xffffffff;
  }
  if (param_5 != (int *)0x0) {
    SetWindowPos(hWnd,(HWND)0x0,*param_5,param_5[3] + 2,0,0,0x15);
  }
  ShowWindow(hWnd,1);
  uVar2 = FUN_00403d90(hWnd,param_4,0,param_5,param_6,pHVar1);
  return uVar2;
}


