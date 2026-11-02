/* Module: pngu3266.dll
   Function: XPNControl
   Address: 6060d032
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNControl::XPNControl(void) */

XPNControl * __thiscall XPNControl::XPNControl(XPNControl *this)

{
                    /* 0x1d032  201  ??0XPNControl@@QAE@XZ */
  CPNWindow::CPNWindow((CPNWindow *)this);
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


