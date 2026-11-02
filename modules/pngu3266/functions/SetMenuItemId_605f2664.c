/* Module: pngu3266.dll
   Function: SetMenuItemId
   Address: 605f2664
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::SetMenuItemId(unsigned long) */

void __thiscall CPNEvent::SetMenuItemId(CPNEvent *this,ulong param_1)

{
                    /* 0x2664  1949  ?SetMenuItemId@CPNEvent@@QAEXK@Z
                       0x2664  1980  ?SetRotation@XPNFont@@QAEXH@Z
                       0x2664  2041  ?SetUserData2@CPNEvent@@QAEXK@Z */
  *(ulong *)(this + 0x20) = param_1;
  return;
}


