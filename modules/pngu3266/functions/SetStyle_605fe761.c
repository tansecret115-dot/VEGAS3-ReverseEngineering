/* Module: pngu3266.dll
   Function: SetStyle
   Address: 605fe761
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNPropertySheet::SetStyle(unsigned long) */

void __thiscall XPNPropertySheet::SetStyle(XPNPropertySheet *this,ulong param_1)

{
                    /* 0xe761  2013  ?SetStyle@XPNPropertySheet@@QAEXK@Z */
  *(ulong *)(this + 0x104) = param_1;
  return;
}


