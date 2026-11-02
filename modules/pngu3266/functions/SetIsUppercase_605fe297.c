/* Module: pngu3266.dll
   Function: SetIsUppercase
   Address: 605fe297
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNEdit::SetIsUppercase(int) */

void __thiscall CPNEdit::SetIsUppercase(CPNEdit *this,int param_1)

{
                    /* 0xe297  1933  ?SetIsUppercase@CPNEdit@@UAEXH@Z */
  *(int *)(this + 0x10a) = param_1;
  return;
}


