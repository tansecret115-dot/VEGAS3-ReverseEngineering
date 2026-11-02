/* Module: pngu3266.dll
   Function: GetCellCount
   Address: 60601dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNAnimButton::GetCellCount(void) */

ulong __thiscall XPNAnimButton::GetCellCount(XPNAnimButton *this)

{
                    /* 0x11dc0  1125  ?GetCellCount@XPNAnimButton@@UAEKXZ
                       0x11dc0  1341  ?GetScrollType@XPNScrollingText@@QAE?AW4eScrollType@1@XZ */
  return *(ulong *)(this + 0x132);
}


