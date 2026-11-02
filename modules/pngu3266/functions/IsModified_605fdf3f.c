/* Module: pngu3266.dll
   Function: IsModified
   Address: 605fdf3f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNEdit::IsModified(void)const  */

int __thiscall CPNEdit::IsModified(CPNEdit *this)

{
                    /* 0xdf3f  1512  ?IsModified@CPNEdit@@QBEHXZ */
  return *(int *)(this + 0x106);
}


