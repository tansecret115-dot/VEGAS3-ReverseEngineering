/* Module: pngu3266.dll
   Function: CPNFont
   Address: 605f56da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFont::CPNFont(void) */

CPNFont * __thiscall CPNFont::CPNFont(CPNFont *this)

{
                    /* 0x56da  67  ??0CPNFont@@QAE@XZ */
  XPNFont::XPNFont((XPNFont *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


