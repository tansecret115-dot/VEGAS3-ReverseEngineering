/* Module: pngu3266.dll
   Function: SetIsModified
   Address: 605fdf32
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEdit::SetIsModified(int) */

void __thiscall CPNEdit::SetIsModified(CPNEdit *this,int param_1)

{
                    /* 0xdf32  1931  ?SetIsModified@CPNEdit@@QAEXH@Z */
  *(int *)(this + 0x106) = param_1;
  return;
}


