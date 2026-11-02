/* Module: pngu3266.dll
   Function: GetScrollIncrement
   Address: 60601dac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNScrollingText::GetScrollIncrement(void) */

ulong __thiscall XPNScrollingText::GetScrollIncrement(XPNScrollingText *this)

{
                    /* 0x11dac  1335  ?GetScrollIncrement@XPNScrollingText@@QAEKXZ */
  return *(ulong *)(this + 0x10e);
}


