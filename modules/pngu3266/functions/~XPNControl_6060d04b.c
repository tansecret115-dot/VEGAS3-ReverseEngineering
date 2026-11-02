/* Module: pngu3266.dll
   Function: ~XPNControl
   Address: 6060d04b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNControl::~XPNControl(void) */

void __thiscall XPNControl::~XPNControl(XPNControl *this)

{
                    /* 0x1d04b  385  ??1XPNControl@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNWindow::~CPNWindow((CPNWindow *)this);
  return;
}


