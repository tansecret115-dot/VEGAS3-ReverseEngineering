/* Module: pngu3266.dll
   Function: ~CPNColorSelection
   Address: 60601834
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNColorSelection::~CPNColorSelection(void) */

void __thiscall CPNColorSelection::~CPNColorSelection(CPNColorSelection *this)

{
                    /* 0x11834  318  ??1CPNColorSelection@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNColorSelection::~XPNColorSelection((XPNColorSelection *)this);
  return;
}


