/* Module: pngu3266.dll
   Function: SetScrollIncrement
   Address: 6060a680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::SetScrollIncrement(long) */

void __thiscall XPNScrollButton::SetScrollIncrement(XPNScrollButton *this,long param_1)

{
                    /* 0x1a680  1989  ?SetScrollIncrement@XPNScrollButton@@QAEXJ@Z */
  *(long *)(*(int *)(this + 0xfb) + 0x18) = param_1;
  return;
}


