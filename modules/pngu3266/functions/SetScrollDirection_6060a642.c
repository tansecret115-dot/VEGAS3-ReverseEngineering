/* Module: pngu3266.dll
   Function: SetScrollDirection
   Address: 6060a642
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::SetScrollDirection(unsigned long) */

void __thiscall XPNScrollButton::SetScrollDirection(XPNScrollButton *this,ulong param_1)

{
                    /* 0x1a642  1986  ?SetScrollDirection@XPNScrollButton@@QAEXK@Z */
  *(ulong *)(*(int *)(this + 0xfb) + 0x34) = param_1;
  return;
}


