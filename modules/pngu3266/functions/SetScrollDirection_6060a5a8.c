/* Module: pngu3266.dll
   Function: SetScrollDirection
   Address: 6060a5a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::SetScrollDirection(unsigned long) */

void __thiscall CPNScrollHelper::SetScrollDirection(CPNScrollHelper *this,ulong param_1)

{
                    /* 0x1a5a8  1985  ?SetScrollDirection@CPNScrollHelper@@QAEXK@Z */
  *(ulong *)(this + 0x34) = param_1;
  return;
}


