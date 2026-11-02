/* Module: pngu3266.dll
   Function: GetTextLimit
   Address: 605fe27c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNEdit::GetTextLimit(void)const  */

long __thiscall CPNEdit::GetTextLimit(CPNEdit *this)

{
                    /* 0xe27c  1392  ?GetTextLimit@CPNEdit@@UBEJXZ */
  return *(long *)(this + 0x102);
}


