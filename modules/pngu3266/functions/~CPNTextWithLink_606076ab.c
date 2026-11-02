/* Module: pngu3266.dll
   Function: ~CPNTextWithLink
   Address: 606076ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNTextWithLink::~CPNTextWithLink(void) */

void __thiscall CPNTextWithLink::~CPNTextWithLink(CPNTextWithLink *this)

{
                    /* 0x176ab  367  ??1CPNTextWithLink@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNTextWithLink::~XPNTextWithLink((XPNTextWithLink *)this);
  return;
}


