/* Module: pngu3266.dll
   Function: SetScrollType
   Address: 60601db3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetScrollType(enum XPNScrollingText::eScrollType) */

void __thiscall XPNScrollingText::SetScrollType(XPNScrollingText *this,eScrollType param_1)

{
                    /* 0x11db3  1995  ?SetScrollType@XPNScrollingText@@QAEXW4eScrollType@1@@Z */
  *(eScrollType *)(this + 0x132) = param_1;
  return;
}


