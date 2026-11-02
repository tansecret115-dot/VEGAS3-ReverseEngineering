/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f19d3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNBrush::SetColor(char,char,char) */

void __thiscall XPNBrush::SetColor(XPNBrush *this,char param_1,char param_2,char param_3)

{
                    /* 0x19d3  1865  ?SetColor@XPNBrush@@UAEXDDD@Z */
  CPNColor::Set((CPNColor *)(this + 0x10),param_1,param_2,param_3);
  return;
}


