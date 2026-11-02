/* Module: pngu3266.dll
   Function: SetItemDelay
   Address: 60601d8b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetItemDelay(unsigned long) */

void __thiscall XPNScrollingText::SetItemDelay(XPNScrollingText *this,ulong param_1)

{
                    /* 0x11d8b  1935  ?SetItemDelay@XPNScrollingText@@QAEXK@Z */
  *(ulong *)(this + 0x116) = param_1;
  return;
}


