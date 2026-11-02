/* Module: pngu3266.dll
   Function: ~CPNRadioBtn
   Address: 605fd086
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNRadioBtn::~CPNRadioBtn(void) */

void __thiscall CPNRadioBtn::~CPNRadioBtn(CPNRadioBtn *this)

{
                    /* 0xd086  355  ??1CPNRadioBtn@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  xPNRadioBtn::~xPNRadioBtn((xPNRadioBtn *)this);
  return;
}


