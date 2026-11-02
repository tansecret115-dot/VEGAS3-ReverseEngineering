/* Module: pngu3266.dll
   Function: CPNScrollingText
   Address: 60601dd2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScrollingText::CPNScrollingText(class CPNScrollingText const &) */

CPNScrollingText * __thiscall
CPNScrollingText::CPNScrollingText(CPNScrollingText *this,CPNScrollingText *param_1)

{
  undefined4 uVar1;
  
                    /* 0x11dd2  139  ??0CPNScrollingText@@QAE@ABV0@@Z */
  XPNScrollingText::XPNScrollingText((XPNScrollingText *)this,(XPNScrollingText *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x13e);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x13e) = uVar1;
  return this;
}


