/* Module: pngu3266.dll
   Function: CPNFont
   Address: 605f573b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFont::CPNFont(void * const &) */

CPNFont * __thiscall CPNFont::CPNFont(CPNFont *this,void **param_1)

{
                    /* 0x573b  64  ??0CPNFont@@QAE@ABQAX@Z */
  XPNFont::XPNFont((XPNFont *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &_vftable_;
  Attach(this,*param_1);
  return this;
}


