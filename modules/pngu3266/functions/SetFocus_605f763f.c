/* Module: pngu3266.dll
   Function: SetFocus
   Address: 605f763f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::SetFocus(void) */

int __thiscall CPNWindow::SetFocus(CPNWindow *this)

{
  HWND__ *hWnd;
  
                    /* 0x763f  1908  ?SetFocus@CPNWindow@@UAEHXZ */
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    if (hWnd != (HWND__ *)0x0) {
      ::SetFocus(hWnd);
      return 1;
    }
  }
  return 0;
}


