/* Module: pngu3266.dll
   Function: SetResult
   Address: 605f26a7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetResult(unsigned long) */

void __thiscall CPNEvent::SetResult(CPNEvent *this,ulong param_1)

{
                    /* 0x26a7  1977  ?SetResult@CPNEvent@@QAEXK@Z */
  *(ulong *)(this + 0x28) = param_1;
  return;
}


