/* Module: pngu3266.dll
   Function: SetColor
   Address: 6060d9b8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetColor(class CPNColor &) */

void __thiscall XPNPen::SetColor(XPNPen *this,CPNColor *param_1)

{
                    /* 0x1d9b8  1866  ?SetColor@XPNPen@@UAEXAAVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0x14),param_1);
  return;
}


