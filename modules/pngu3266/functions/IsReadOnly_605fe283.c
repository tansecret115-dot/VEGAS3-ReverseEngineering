/* Module: pngu3266.dll
   Function: IsReadOnly
   Address: 605fe283
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNEdit::IsReadOnly(void)const  */

int __thiscall CPNEdit::IsReadOnly(CPNEdit *this)

{
                    /* 0xe283  1516  ?IsReadOnly@CPNEdit@@UBEHXZ */
  return *(int *)(this + 0x10e);
}


