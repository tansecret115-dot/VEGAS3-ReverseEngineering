/* Module: pngu3266.dll
   Function: CPNCustomText
   Address: 606074a3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCustomText::CPNCustomText(class CPNCustomText const &) */

CPNCustomText * __thiscall CPNCustomText::CPNCustomText(CPNCustomText *this,CPNCustomText *param_1)

{
                    /* 0x174a3  49  ??0CPNCustomText@@QAE@ABV0@@Z */
  XPNCustomText::XPNCustomText((XPNCustomText *)this,(XPNCustomText *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


