/* Module: pngu3266.dll
   Function: operator=
   Address: 60601df9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNScrollingText & __thiscall CPNScrollingText::operator=(class CPNScrollingText
   const &) */

CPNScrollingText * __thiscall
CPNScrollingText::operator=(CPNScrollingText *this,CPNScrollingText *param_1)

{
                    /* 0x11df9  492  ??4CPNScrollingText@@QAEAAV0@ABV0@@Z */
  XPNScrollingText::operator=((XPNScrollingText *)this,(XPNScrollingText *)param_1);
  *(undefined4 *)(this + 0x13e) = *(undefined4 *)(param_1 + 0x13e);
  return this;
}


