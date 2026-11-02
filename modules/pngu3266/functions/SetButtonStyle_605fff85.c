/* Module: pngu3266.dll
   Function: SetButtonStyle
   Address: 605fff85
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::SetButtonStyle(unsigned long) */

void __thiscall XPNMenuButton::SetButtonStyle(XPNMenuButton *this,ulong param_1)

{
                    /* 0xff85  1853  ?SetButtonStyle@XPNMenuButton@@QAEXK@Z */
  *(ulong *)(this + 0xdc) = param_1;
  return;
}


