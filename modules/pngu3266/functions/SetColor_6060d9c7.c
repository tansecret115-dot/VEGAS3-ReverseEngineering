/* Module: pngu3266.dll
   Function: SetColor
   Address: 6060d9c7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNPen::SetColor(char,char,char) */

void __thiscall XPNPen::SetColor(XPNPen *this,char param_1,char param_2,char param_3)

{
                    /* 0x1d9c7  1867  ?SetColor@XPNPen@@UAEXDDD@Z */
  CPNColor::Set((CPNColor *)(this + 0x14),param_1,param_2,param_3);
  return;
}


