/* Module: pngu3266.dll
   Function: SetPasswordChar
   Address: 605fe268
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetPasswordChar(char) */

void __thiscall CPNEdit::SetPasswordChar(CPNEdit *this,char param_1)

{
                    /* 0xe268  1959  ?SetPasswordChar@CPNEdit@@UAEXD@Z */
  this[0x112] = (CPNEdit)param_1;
  return;
}


