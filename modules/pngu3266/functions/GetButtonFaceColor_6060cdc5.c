/* Module: pngu3266.dll
   Function: GetButtonFaceColor
   Address: 6060cdc5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNButton::GetButtonFaceColor(class CPNColor &) */

void __thiscall XPNButton::GetButtonFaceColor(XPNButton *this,CPNColor *param_1)

{
                    /* 0x1cdc5  1116  ?GetButtonFaceColor@XPNButton@@UAEXAAVCPNColor@@@Z */
  CPNColor::operator=(param_1,(CPNColor *)(this + 0xd8));
  return;
}


