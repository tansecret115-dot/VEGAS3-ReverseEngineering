/* Module: pngu3266.dll
   Function: ~CPNColor
   Address: 605f402e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNColor::~CPNColor(void) */

void __thiscall CPNColor::~CPNColor(CPNColor *this)

{
                    /* 0x402e  316  ??1CPNColor@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


