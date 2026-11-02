/* Module: pngu3266.dll
   Function: GetScrollIncrement
   Address: 6060a676
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNScrollButton::GetScrollIncrement(void) */

long __thiscall XPNScrollButton::GetScrollIncrement(XPNScrollButton *this)

{
                    /* 0x1a676  1334  ?GetScrollIncrement@XPNScrollButton@@QAEJXZ */
  return *(long *)(*(int *)(this + 0xfb) + 0x18);
}


