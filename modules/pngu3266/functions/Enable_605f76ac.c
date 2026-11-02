/* Module: pngu3266.dll
   Function: Enable
   Address: 605f76ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Enable(int) */

void __thiscall CPNWindow::Enable(CPNWindow *this,int param_1)

{
  HWND__ *hWnd;
  
                    /* 0x76ac  1027  ?Enable@CPNWindow@@UAEXH@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    EnableWindow(hWnd,param_1);
  }
  else {
    *(int *)(this + 0x58) = param_1;
  }
  return;
}


