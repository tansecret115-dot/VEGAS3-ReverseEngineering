/* Module: pngu3266.dll
   Function: SetButtonFaceColor
   Address: 605f374b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNButton::SetButtonFaceColor(class CPNColor const &) */

void __thiscall CPNButton::SetButtonFaceColor(CPNButton *this,CPNColor *param_1)

{
                    /* 0x374b  1841  ?SetButtonFaceColor@CPNButton@@UAEXABVCPNColor@@@Z */
  XPNButton::SetButtonFaceColor((XPNButton *)this,param_1);
  return;
}


