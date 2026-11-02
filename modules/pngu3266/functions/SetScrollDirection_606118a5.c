/* Module: pngu3266.dll
   Function: SetScrollDirection
   Address: 606118a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetScrollDirection(enum
   XPNScrollingText::eScrollDirection) */

void __thiscall
XPNScrollingText::SetScrollDirection(XPNScrollingText *this,eScrollDirection param_1)

{
                    /* 0x218a5  1987
                       ?SetScrollDirection@XPNScrollingText@@QAEXW4eScrollDirection@1@@Z */
  *(eScrollDirection *)(this + 0x12e) = param_1;
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


