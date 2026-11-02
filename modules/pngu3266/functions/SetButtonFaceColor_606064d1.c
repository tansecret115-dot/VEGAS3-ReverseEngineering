/* Module: pngu3266.dll
   Function: SetButtonFaceColor
   Address: 606064d1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNAnimButton::SetButtonFaceColor(class CPNColor const &) */

void __thiscall CPNAnimButton::SetButtonFaceColor(CPNAnimButton *this,CPNColor *param_1)

{
                    /* 0x164d1  1840  ?SetButtonFaceColor@CPNAnimButton@@UAEXABVCPNColor@@@Z */
  XPNAnimButton::SetButtonFaceColor((XPNAnimButton *)this,param_1);
  UpdateImages(this);
  return;
}


