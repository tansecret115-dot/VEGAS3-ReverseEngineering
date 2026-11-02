/* Module: pngu3266.dll
   Function: SetPlatformEvent
   Address: 605f266e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetPlatformEvent(unsigned long) */

void __thiscall CPNEvent::SetPlatformEvent(CPNEvent *this,ulong param_1)

{
                    /* 0x266e  1963  ?SetPlatformEvent@CPNEvent@@QAEXK@Z */
  *(ulong *)(this + 0x24) = param_1;
  return;
}


