/* Module: pngu3266.dll
   Function: SetControlStyle
   Address: 605f31d2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNControl::SetControlStyle(unsigned long) */

void __thiscall XPNControl::SetControlStyle(XPNControl *this,ulong param_1)

{
                    /* 0x31d2  1875  ?SetControlStyle@XPNControl@@QAEXK@Z */
  *(ulong *)(this + 0xb8) = param_1;
  return;
}


