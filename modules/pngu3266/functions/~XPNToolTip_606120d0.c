/* Module: pngu3266.dll
   Function: ~XPNToolTip
   Address: 606120d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNToolTip::~XPNToolTip(void) */

void __thiscall XPNToolTip::~XPNToolTip(XPNToolTip *this)

{
                    /* 0x220d0  424  ??1XPNToolTip@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNWindow::~CPNWindow((CPNWindow *)this);
  return;
}


