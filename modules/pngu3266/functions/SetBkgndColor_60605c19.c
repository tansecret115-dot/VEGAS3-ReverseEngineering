/* Module: pngu3266.dll
   Function: SetBkgndColor
   Address: 60605c19
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNAnimButton::SetBkgndColor(class CPNColor const &) */

void __thiscall XPNAnimButton::SetBkgndColor(XPNAnimButton *this,CPNColor *param_1)

{
                    /* 0x15c19  1834  ?SetBkgndColor@XPNAnimButton@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xff),param_1);
  return;
}


