/* Module: pngu3266.dll
   Function: ~XPNGroupBox
   Address: 6060d93a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNGroupBox::~XPNGroupBox(void) */

void __thiscall XPNGroupBox::~XPNGroupBox(XPNGroupBox *this)

{
                    /* 0x1d93a  395  ??1XPNGroupBox@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


