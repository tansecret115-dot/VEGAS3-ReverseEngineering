/* Module: pngu3266.dll
   Function: SetIsReadOnly
   Address: 605fe28a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetIsReadOnly(int) */

void __thiscall CPNEdit::SetIsReadOnly(CPNEdit *this,int param_1)

{
                    /* 0xe28a  1932  ?SetIsReadOnly@CPNEdit@@UAEXH@Z */
  *(int *)(this + 0x10e) = param_1;
  return;
}


