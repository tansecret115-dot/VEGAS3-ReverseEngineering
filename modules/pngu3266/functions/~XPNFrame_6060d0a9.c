/* Module: pngu3266.dll
   Function: ~XPNFrame
   Address: 6060d0a9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNFrame::~XPNFrame(void) */

void __thiscall XPNFrame::~XPNFrame(XPNFrame *this)

{
                    /* 0x1d0a9  393  ??1XPNFrame@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNWindow::~CPNWindow((CPNWindow *)this);
  return;
}


