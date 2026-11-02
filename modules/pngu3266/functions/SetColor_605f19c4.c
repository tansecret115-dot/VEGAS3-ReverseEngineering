/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f19c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNBrush::SetColor(class CPNColor &) */

void __thiscall XPNBrush::SetColor(XPNBrush *this,CPNColor *param_1)

{
                    /* 0x19c4  1864  ?SetColor@XPNBrush@@UAEXAAVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0x10),param_1);
  return;
}


