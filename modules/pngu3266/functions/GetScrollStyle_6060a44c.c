/* Module: pngu3266.dll
   Function: GetScrollStyle
   Address: 6060a44c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNScrollHelper::GetScrollStyle(void) */

ulong __thiscall CPNScrollHelper::GetScrollStyle(CPNScrollHelper *this)

{
                    /* 0x1a44c  1340  ?GetScrollStyle@CPNScrollHelper@@QAEKXZ */
  return *(ulong *)(this + 0x38);
}


