/* Module: pngu3266.dll
   Function: GetItemDelay
   Address: 60601d98
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNScrollingText::GetItemDelay(void) */

ulong __thiscall XPNScrollingText::GetItemDelay(XPNScrollingText *this)

{
                    /* 0x11d98  1234  ?GetItemDelay@XPNScrollingText@@QAEKXZ */
  return *(ulong *)(this + 0x116);
}


