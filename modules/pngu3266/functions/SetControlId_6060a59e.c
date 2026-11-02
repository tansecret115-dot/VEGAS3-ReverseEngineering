/* Module: pngu3266.dll
   Function: SetControlId
   Address: 6060a59e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetControlId(unsigned long) */

void __thiscall CPNEvent::SetControlId(CPNEvent *this,ulong param_1)

{
                    /* 0x1a59e  1874  ?SetControlId@CPNEvent@@QAEXK@Z
                       0x1a59e  1988  ?SetScrollIncrement@CPNScrollHelper@@QAEXJ@Z */
  *(ulong *)(this + 0x18) = param_1;
  return;
}


