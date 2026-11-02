/* Module: pngu3266.dll
   Function: GetCurrentCell
   Address: 60605c12
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNAnimButton::GetCurrentCell(void) */

ulong __thiscall XPNAnimButton::GetCurrentCell(XPNAnimButton *this)

{
                    /* 0x15c12  1162  ?GetCurrentCell@XPNAnimButton@@UAEKXZ
                       0x15c12  1331
                       ?GetScrollDirection@XPNScrollingText@@QAE?AW4eScrollDirection@1@XZ */
  return *(ulong *)(this + 0x12e);
}


