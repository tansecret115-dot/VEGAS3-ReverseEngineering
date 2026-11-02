/* Module: pngu3266.dll
   Function: MakeButtonDefault
   Address: 6060cda6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNButton::MakeButtonDefault(int) */

void __thiscall XPNButton::MakeButtonDefault(XPNButton *this,int param_1)

{
                    /* 0x1cda6  1550  ?MakeButtonDefault@XPNButton@@UAEXH@Z */
  *(int *)(this + 0xcc) = param_1;
  return;
}


