/* Module: rmme3260.dll
   Function: FUN_66242520
   Address: 66242520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66242520(int *param_1)

{
  int cx;
  int cy;
  HWND pHVar1;
  int *local_8;
  
  if (*param_1 != 0) {
    local_8 = param_1;
    cx = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    ShowWindow((HWND)*param_1,9);
    SetWindowPos((HWND)*param_1,(HWND)0xffffffff,0,0,cx,cy,0);
    ShowWindow((HWND)*param_1,5);
    param_1[4] = 1;
    pHVar1 = GetForegroundWindow();
    param_1[2] = (int)pHVar1;
    local_8 = (int *)0x0;
    SystemParametersInfoA(0x2000,0,&local_8,0);
    SystemParametersInfoA(0x2001,0,(PVOID)0x0,0);
    SetForegroundWindow((HWND)*param_1);
    SystemParametersInfoA(0x2001,0,local_8,0);
    pHVar1 = SetFocus((HWND)*param_1);
    param_1[1] = (int)pHVar1;
    SetActiveWindow((HWND)*param_1);
    return 0;
  }
  return 0x80004005;
}


