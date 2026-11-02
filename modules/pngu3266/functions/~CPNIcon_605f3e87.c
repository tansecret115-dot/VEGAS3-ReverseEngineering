/* Module: pngu3266.dll
   Function: ~CPNIcon
   Address: 605f3e87
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNIcon::~CPNIcon(void) */

void __thiscall CPNIcon::~CPNIcon(CPNIcon *this)

{
                    /* 0x3e87  335  ??1CPNIcon@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNIcon::~XPNIcon((XPNIcon *)this);
  return;
}


