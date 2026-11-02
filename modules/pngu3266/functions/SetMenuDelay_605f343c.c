/* Module: pngu3266.dll
   Function: SetMenuDelay
   Address: 605f343c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNButton::SetMenuDelay(unsigned long) */

void __thiscall XPNButton::SetMenuDelay(XPNButton *this,ulong param_1)

{
                    /* 0x343c  1948  ?SetMenuDelay@XPNButton@@QAEXK@Z */
  *(ulong *)(this + 0xf7) = param_1;
  return;
}


