/* Module: pngu3266.dll
   Function: SetCurrentSelection
   Address: 605fff68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::SetCurrentSelection(long) */

void __thiscall XPNMenuButton::SetCurrentSelection(XPNMenuButton *this,long param_1)

{
                    /* 0xff68  1882  ?SetCurrentSelection@XPNMenuButton@@QAEXJ@Z */
  *(long *)(this + 0xd8) = param_1;
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


