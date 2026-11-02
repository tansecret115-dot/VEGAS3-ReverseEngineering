/* Module: pngu3266.dll
   Function: SetScrollDelay
   Address: 60601d77
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetScrollDelay(unsigned long) */

void __thiscall XPNScrollingText::SetScrollDelay(XPNScrollingText *this,ulong param_1)

{
                    /* 0x11d77  1984  ?SetScrollDelay@XPNScrollingText@@QAEXK@Z */
  *(ulong *)(this + 0x112) = param_1;
  return;
}


