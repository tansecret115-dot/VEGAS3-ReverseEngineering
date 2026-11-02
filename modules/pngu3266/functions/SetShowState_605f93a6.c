/* Module: pngu3266.dll
   Function: SetShowState
   Address: 605f93a6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetShowState(long) */

void __thiscall CPNWindow::SetShowState(CPNWindow *this,long param_1)

{
  int nCmdShow;
  
                    /* 0x93a6  2000  ?SetShowState@CPNWindow@@UAEXJ@Z */
  nCmdShow = 0;
  if (param_1 == 1) {
    nCmdShow = 3;
  }
  else if (param_1 == 2) {
    nCmdShow = 6;
  }
  else if (param_1 == 3) {
    nCmdShow = 9;
  }
  else if (param_1 == 4) {
    nCmdShow = 4;
  }
  ShowWindow(*(HWND *)(this + 0xc),nCmdShow);
  return;
}


