/* Module: pngu3266.dll
   Function: ~CPNGroupBox
   Address: 605f5af1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNGroupBox::~CPNGroupBox(void) */

void __thiscall CPNGroupBox::~CPNGroupBox(CPNGroupBox *this)

{
                    /* 0x5af1  334  ??1CPNGroupBox@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNGroupBox::~XPNGroupBox((XPNGroupBox *)this);
  return;
}


