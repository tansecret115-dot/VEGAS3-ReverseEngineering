/* Module: pngu3266.dll
   Function: GetPushedState
   Address: 605f3427
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNButton::GetPushedState(void) */

int __thiscall XPNButton::GetPushedState(XPNButton *this)

{
                    /* 0x3427  1307  ?GetPushedState@XPNButton@@QAEHXZ */
  return *(int *)(this + 200);
}


