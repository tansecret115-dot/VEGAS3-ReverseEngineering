/* Module: pngu3266.dll
   Function: ~XPNCustomText
   Address: 6060bd17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNCustomText::~XPNCustomText(void) */

void __thiscall XPNCustomText::~XPNCustomText(XPNCustomText *this)

{
                    /* 0x1bd17  388  ??1XPNCustomText@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(XPNTimer **)(this + 0x141) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x141),0);
    *(undefined4 *)(this + 0x141) = 0;
  }
  CPNColor::~CPNColor((CPNColor *)(this + 0x112));
  CPNColor::~CPNColor((CPNColor *)(this + 0xef));
  CPNColor::~CPNColor((CPNColor *)(this + 0xd0));
  FUN_60618cd0((int *)(this + 0xc4));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


