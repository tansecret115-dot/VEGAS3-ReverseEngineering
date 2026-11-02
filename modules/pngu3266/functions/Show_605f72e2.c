/* Module: pngu3266.dll
   Function: Show
   Address: 605f72e2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::Show(int) */

int __thiscall CPNWindow::Show(CPNWindow *this,int param_1)

{
  HWND hWnd;
  int nCmdShow;
  
                    /* 0x72e2  2061  ?Show@CPNWindow@@UAEHH@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    if (param_1 == 0) {
      nCmdShow = 0;
      hWnd = GetWindow(*(HWND *)(this + 0xc),4);
      if (hWnd != (HWND)0x0) {
        SetActiveWindow(hWnd);
      }
    }
    else {
      nCmdShow = 5;
    }
    ShowWindow(*(HWND *)(this + 0xc),nCmdShow);
    if ((param_1 != 0) && (*(int *)(this + 0x48) == 0)) {
      BringWindowToTop(*(HWND *)(this + 0xc));
    }
  }
  else {
    *(int *)(this + 0x5c) = param_1;
  }
  return 1;
}


