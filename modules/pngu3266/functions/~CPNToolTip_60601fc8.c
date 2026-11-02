/* Module: pngu3266.dll
   Function: ~CPNToolTip
   Address: 60601fc8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNToolTip::~CPNToolTip(void) */

void __thiscall CPNToolTip::~CPNToolTip(CPNToolTip *this)

{
                    /* 0x11fc8  370  ??1CPNToolTip@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNToolTip::~XPNToolTip((XPNToolTip *)this);
  return;
}


