/* Module: pngu3266.dll
   Function: CPNScrollBar
   Address: 6060291a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScrollBar::CPNScrollBar(class CPNScrollBar const &) */

CPNScrollBar * __thiscall CPNScrollBar::CPNScrollBar(CPNScrollBar *this,CPNScrollBar *param_1)

{
                    /* 0x1291a  133  ??0CPNScrollBar@@QAE@ABV0@@Z */
  XPNScrollBar::XPNScrollBar((XPNScrollBar *)this,(XPNScrollBar *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


