/* Module: pngu3266.dll
   Function: ~CPNBrush
   Address: 605f2aee
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNBrush::~CPNBrush(void) */

void __thiscall CPNBrush::~CPNBrush(CPNBrush *this)

{
                    /* 0x2aee  310  ??1CPNBrush@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FreeResource(this);
  XPNBrush::~XPNBrush((XPNBrush *)this);
  return;
}


