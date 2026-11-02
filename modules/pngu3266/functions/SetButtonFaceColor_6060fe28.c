/* Module: pngu3266.dll
   Function: SetButtonFaceColor
   Address: 6060fe28
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNAnimButton::SetButtonFaceColor(class CPNColor const &) */

void __thiscall XPNAnimButton::SetButtonFaceColor(XPNAnimButton *this,CPNColor *param_1)

{
                    /* 0x1fe28  1843  ?SetButtonFaceColor@XPNAnimButton@@UAEXABVCPNColor@@@Z
                       0x1fe28  1845  ?SetButtonFaceColor@XPNImageButton@@UAEXABVCPNColor@@@Z */
  CPNButton::SetButtonFaceColor((CPNButton *)this,param_1);
  return;
}


