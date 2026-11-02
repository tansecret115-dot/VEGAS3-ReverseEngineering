/* Module: pngu3266.dll
   Function: GetPosition
   Address: 6060a6a2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNScrollButton::GetPosition(void) */

long __thiscall XPNScrollButton::GetPosition(XPNScrollButton *this)

{
                    /* 0x1a6a2  1304  ?GetPosition@XPNScrollButton@@QAEJXZ */
  return *(long *)(*(int *)(this + 0xfb) + 0x14);
}


