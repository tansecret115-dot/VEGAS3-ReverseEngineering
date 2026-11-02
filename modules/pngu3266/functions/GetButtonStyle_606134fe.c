/* Module: pngu3266.dll
   Function: GetButtonStyle
   Address: 606134fe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNCustomButton::GetButtonStyle(void) */

ulong __thiscall XPNCustomButton::GetButtonStyle(XPNCustomButton *this)

{
                    /* 0x234fe  1118  ?GetButtonStyle@XPNCustomButton@@QAEKXZ */
  return *(ulong *)(this + 0x107);
}


