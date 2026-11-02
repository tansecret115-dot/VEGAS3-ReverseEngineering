/* Module: pngu3266.dll
   Function: XPNWindow
   Address: 6060da17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNWindow::XPNWindow(void) */

XPNWindow * __thiscall XPNWindow::XPNWindow(XPNWindow *this)

{
                    /* 0x1da17  292  ??0XPNWindow@@QAE@XZ */
  CPNRouter::CPNRouter((CPNRouter *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


