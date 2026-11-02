/* Module: pngu3266.dll
   Function: CPNImage
   Address: 605f44f7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImage::CPNImage(void) */

CPNImage * __thiscall CPNImage::CPNImage(CPNImage *this)

{
                    /* 0x44f7  79  ??0CPNImage@@QAE@XZ */
  XPNImage::XPNImage((XPNImage *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


