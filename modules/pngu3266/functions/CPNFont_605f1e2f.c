/* Module: pngu3266.dll
   Function: CPNFont
   Address: 605f1e2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFont::CPNFont(class CPNFont const &) */

CPNFont * __thiscall CPNFont::CPNFont(CPNFont *this,CPNFont *param_1)

{
                    /* 0x1e2f  65  ??0CPNFont@@QAE@ABV0@@Z */
  XPNFont::XPNFont((XPNFont *)this,(XPNFont *)param_1);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined ***)this = &_vftable_;
  return this;
}


