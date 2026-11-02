/* Module: pngu3266.dll
   Function: IsUppercase
   Address: 605fe2a4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNEdit::IsUppercase(void)const  */

int __thiscall CPNEdit::IsUppercase(CPNEdit *this)

{
                    /* 0xe2a4  1524  ?IsUppercase@CPNEdit@@UBEHXZ */
  return *(int *)(this + 0x10a);
}


