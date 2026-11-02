/* Module: pngu3266.dll
   Function: ~CPNFont
   Address: 605f579a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNFont::~CPNFont(void) */

void __thiscall CPNFont::~CPNFont(CPNFont *this)

{
                    /* 0x579a  330  ??1CPNFont@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FreeResource(this);
  XPNFont::~XPNFont((XPNFont *)this);
  return;
}


