/* Module: pngu3266.dll
   Function: SetScrollIncrement
   Address: 60601d9f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetScrollIncrement(unsigned long) */

void __thiscall XPNScrollingText::SetScrollIncrement(XPNScrollingText *this,ulong param_1)

{
                    /* 0x11d9f  1990  ?SetScrollIncrement@XPNScrollingText@@QAEXK@Z */
  *(ulong *)(this + 0x10e) = param_1;
  return;
}


