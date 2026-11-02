/* Module: pngu3266.dll
   Function: SetForegroundWindow
   Address: 605f93fd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetForegroundWindow(int,unsigned long) */

void __thiscall CPNWindow::SetForegroundWindow(CPNWindow *this,int param_1,ulong param_2)

{
  BOOL BVar1;
  HWND hWnd;
  ushort local_1c [3];
  int local_16;
  int local_8;
  
                    /* 0x93fd  1915  ?SetForegroundWindow@CPNWindow@@UAEXHK@Z */
  local_8 = 1;
  if (param_1 != 0) {
    memset(local_1c,0,0x12);
    FUN_6061a7a0((undefined4 *)local_1c);
    if (local_16 == 0x400) {
      param_1 = 0;
      SystemParametersInfoA(0x2000,0,&param_1,0);
      SystemParametersInfoA(0x2001,0,(PVOID)0x0,0);
      BVar1 = IsIconic(*(HWND *)(this + 0xc));
      if (BVar1 != 0) {
        ShowWindow(*(HWND *)(this + 0xc),9);
      }
      ::SetForegroundWindow(*(HWND *)(this + 0xc));
      local_8 = 0;
      SystemParametersInfoA(0x2001,0,(PVOID)param_1,0);
    }
    else if ((((param_2 & 1) != 0) && (local_16 == 8)) && (4 < local_1c[0])) {
      hWnd = GetForegroundWindow();
      if ((hWnd != (HWND)0x0) && (hWnd != *(HWND *)(this + 0xc))) {
        param_1 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        param_2 = GetWindowThreadProcessId(*(HWND *)(this + 0xc),(LPDWORD)0x0);
        if (param_1 != param_2) {
          AttachThreadInput(param_2,param_1,1);
          ::SetForegroundWindow(*(HWND *)(this + 0xc));
          AttachThreadInput(param_2,param_1,0);
          Sleep(100);
          local_8 = 0;
        }
      }
    }
  }
  if (local_8 != 0) {
    ::SetForegroundWindow(*(HWND *)(this + 0xc));
  }
  return;
}


