/* Module: pngu3266.dll
   Function: GetPasswordChar
   Address: 605fe275
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char __thiscall CPNEdit::GetPasswordChar(void)const  */

char __thiscall CPNEdit::GetPasswordChar(CPNEdit *this)

{
                    /* 0xe275  1292  ?GetPasswordChar@CPNEdit@@UBEDXZ */
  return (char)this[0x112];
}


