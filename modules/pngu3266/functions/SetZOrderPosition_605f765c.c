/* Module: pngu3266.dll
   Function: SetZOrderPosition
   Address: 605f765c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetZOrderPosition(unsigned long) */

void __thiscall CPNWindow::SetZOrderPosition(CPNWindow *this,ulong param_1)

{
  HWND hWndInsertAfter;
  
                    /* 0x765c  2047  ?SetZOrderPosition@CPNWindow@@UAEXK@Z */
  hWndInsertAfter = (HWND)0x0;
  if (param_1 == 1) {
    hWndInsertAfter = (HWND)0x1;
  }
  else if (param_1 == 2) {
    hWndInsertAfter = (HWND)0xfffffffe;
  }
  else if (param_1 == 3) {
    hWndInsertAfter = (HWND)0x0;
  }
  else if (param_1 == 4) {
    hWndInsertAfter = (HWND)0xffffffff;
  }
  SetWindowPos(*(HWND *)(this + 0xc),hWndInsertAfter,0,0,0,0,3);
  return;
}


