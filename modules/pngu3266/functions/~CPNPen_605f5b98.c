/* Module: pngu3266.dll
   Function: ~CPNPen
   Address: 605f5b98
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNPen::~CPNPen(void) */

void __thiscall CPNPen::~CPNPen(CPNPen *this)

{
                    /* 0x5b98  350  ??1CPNPen@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FreeResource(this);
  XPNPen::~XPNPen((XPNPen *)this);
  return;
}


