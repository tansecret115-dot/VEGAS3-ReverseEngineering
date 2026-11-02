/* Module: rmme3260.dll
   Function: FUN_6623abb0
   Address: 6623abb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6623abb0(int *param_1)

{
  int iVar1;
  int cy;
  HWND pHVar2;
  int *local_8;
  
  if (*param_1 != 0) {
    local_8 = param_1;
    iVar1 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    ShowWindow((HWND)*param_1,9);
    SetWindowPos((HWND)*param_1,(HWND)0xffffffff,0,0,iVar1,cy,0);
    if (DAT_6627cf38 == 0) {
      ShowWindow((HWND)*param_1,5);
    }
    param_1[5] = 1;
    pHVar2 = GetForegroundWindow();
    param_1[2] = (int)pHVar2;
    iVar1 = FUN_6625fcd0((undefined4 *)0x0);
    if (iVar1 == 0x400) {
      local_8 = (int *)0x0;
      SystemParametersInfoA(0x2000,0,&local_8,0);
      SystemParametersInfoA(0x2001,0,(PVOID)0x0,0);
      SetForegroundWindow((HWND)*param_1);
      SystemParametersInfoA(0x2001,0,local_8,0);
    }
    else {
      SetForegroundWindow((HWND)*param_1);
    }
    pHVar2 = SetFocus((HWND)*param_1);
    param_1[1] = (int)pHVar2;
    return 0;
  }
  return 0x80004005;
}


