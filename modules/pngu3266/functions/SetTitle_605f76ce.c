/* Module: pngu3266.dll
   Function: SetTitle
   Address: 605f76ce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetTitle(char const *) */

void __thiscall CPNWindow::SetTitle(CPNWindow *this,char *param_1)

{
  HWND__ *hWnd;
  
                    /* 0x76ce  2030  ?SetTitle@CPNWindow@@UAEXPBD@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    SetWindowTextA(hWnd,param_1);
  }
  return;
}


