/* Module: pngu3266.dll
   Function: SetButtonFaceColor
   Address: 6060cdb3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNButton::SetButtonFaceColor(class CPNColor const &) */

void __thiscall XPNButton::SetButtonFaceColor(XPNButton *this,CPNColor *param_1)

{
                    /* 0x1cdb3  1844  ?SetButtonFaceColor@XPNButton@@UAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xd8),param_1);
  return;
}


