/* Module: pngu3266.dll
   Function: ~xPNRadioBtn
   Address: 6060fd02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall xPNRadioBtn::~xPNRadioBtn(void) */

void __thiscall xPNRadioBtn::~xPNRadioBtn(xPNRadioBtn *this)

{
                    /* 0x1fd02  430  ??1xPNRadioBtn@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


