/* Module: pngu3266.dll
   Function: GetScrollDelay
   Address: 60601d84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNScrollingText::GetScrollDelay(void)const  */

ulong __thiscall XPNScrollingText::GetScrollDelay(XPNScrollingText *this)

{
                    /* 0x11d84  1328  ?GetScrollDelay@XPNScrollingText@@QBEKXZ */
  return *(ulong *)(this + 0x112);
}


