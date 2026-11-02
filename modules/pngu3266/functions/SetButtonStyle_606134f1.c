/* Module: pngu3266.dll
   Function: SetButtonStyle
   Address: 606134f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomButton::SetButtonStyle(long) */

void __thiscall XPNCustomButton::SetButtonStyle(XPNCustomButton *this,long param_1)

{
                    /* 0x234f1  1852  ?SetButtonStyle@XPNCustomButton@@QAEXJ@Z */
  *(long *)(this + 0x107) = param_1;
  return;
}


