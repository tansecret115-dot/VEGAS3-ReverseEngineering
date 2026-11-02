/* Module: pngu3266.dll
   Function: ~XPNWindow
   Address: 6060da2d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNWindow::~XPNWindow(void) */

void __thiscall XPNWindow::~XPNWindow(XPNWindow *this)

{
                    /* 0x1da2d  426  ??1XPNWindow@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNRouter::~CPNRouter((CPNRouter *)this);
  return;
}


