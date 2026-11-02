/* Module: pngu3266.dll
   Function: ~XPNAnimateCtl
   Address: 6060f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNAnimateCtl::~XPNAnimateCtl(void) */

void __thiscall XPNAnimateCtl::~XPNAnimateCtl(XPNAnimateCtl *this)

{
                    /* 0x1f5a0  375  ??1XPNAnimateCtl@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(XPNTimer **)(this + 0xc0) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0xc0),0);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  if (*(undefined4 **)(this + 0xeb) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xeb))(1);
    *(undefined4 *)(this + 0xeb) = 0;
  }
  if (*(undefined4 **)(this + 0xe7) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xe7))(1);
    *(undefined4 *)(this + 0xe7) = 0;
  }
  CPNColor::~CPNColor((CPNColor *)(this + 0xc4));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


