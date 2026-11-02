/* Module: pngu3266.dll
   Function: CPNProgress
   Address: 60601aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNProgress::CPNProgress(class CPNProgress const &) */

CPNProgress * __thiscall CPNProgress::CPNProgress(CPNProgress *this,CPNProgress *param_1)

{
                    /* 0x11aa0  115  ??0CPNProgress@@QAE@ABV0@@Z */
  XPNProgress::XPNProgress((XPNProgress *)this,(XPNProgress *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


