/* Module: pngu3266.dll
   Function: SetForegroundColor
   Address: 605fe256
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetForegroundColor(class CPNColor const &) */

void __thiscall CPNEdit::SetForegroundColor(CPNEdit *this,CPNColor *param_1)

{
                    /* 0xe256  1913  ?SetForegroundColor@CPNEdit@@UAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xdf),param_1);
  return;
}


