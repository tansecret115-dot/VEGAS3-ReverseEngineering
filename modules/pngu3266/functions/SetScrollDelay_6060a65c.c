/* Module: pngu3266.dll
   Function: SetScrollDelay
   Address: 6060a65c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollButton::SetScrollDelay(unsigned long) */

void __thiscall XPNScrollButton::SetScrollDelay(XPNScrollButton *this,ulong param_1)

{
                    /* 0x1a65c  1983  ?SetScrollDelay@XPNScrollButton@@QAEXK@Z */
  *(ulong *)(*(int *)(this + 0xfb) + 0x1c) = param_1;
  return;
}


