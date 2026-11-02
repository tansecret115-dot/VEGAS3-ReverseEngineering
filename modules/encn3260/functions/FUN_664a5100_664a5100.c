/* Module: encn3260.dll
   Function: FUN_664a5100
   Address: 664a5100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664a5100(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_8;
  
  if ((HWND)*param_1 == (HWND)0x0) {
    return 0x80004005;
  }
  param_1[5] = 0;
  local_8 = param_1;
  SetWindowPos((HWND)*param_1,(HWND)0xfffffffe,0,0,100,100,0);
  ShowWindow((HWND)*param_1,0);
  iVar1 = FUN_664d54b0((undefined4 *)0x0);
  if (iVar1 == 0x400) {
    local_8 = (undefined4 *)0x0;
    SystemParametersInfoA(0x2000,0,&local_8,0);
    SystemParametersInfoA(0x2001,0,(PVOID)0x0,0);
    SetForegroundWindow((HWND)param_1[2]);
    SystemParametersInfoA(0x2001,0,local_8,0);
    SetFocus((HWND)param_1[1]);
    return 0;
  }
  SetForegroundWindow((HWND)param_1[2]);
  SetFocus((HWND)param_1[1]);
  return 0;
}


