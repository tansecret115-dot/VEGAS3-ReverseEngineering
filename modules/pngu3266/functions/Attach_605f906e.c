/* Module: pngu3266.dll
   Function: Attach
   Address: 605f906e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Attach(struct _PNxWindow const &) */

void __thiscall CPNWindow::Attach(CPNWindow *this,_PNxWindow *param_1)

{
                    /* 0x906e  816  ?Attach@CPNWindow@@UAEXABU_PNxWindow@@@Z */
  if (*(HWND__ **)param_1 != (HWND__ *)0x0) {
    Attach(this,*(HWND__ **)param_1);
  }
  return;
}


