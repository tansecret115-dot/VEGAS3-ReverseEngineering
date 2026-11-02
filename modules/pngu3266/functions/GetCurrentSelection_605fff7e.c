/* Module: pngu3266.dll
   Function: GetCurrentSelection
   Address: 605fff7e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNMenuButton::GetCurrentSelection(void) */

long __thiscall XPNMenuButton::GetCurrentSelection(XPNMenuButton *this)

{
                    /* 0xff7e  1167  ?GetCurrentSelection@XPNMenuButton@@QAEJXZ */
  return *(long *)(this + 0xd8);
}


