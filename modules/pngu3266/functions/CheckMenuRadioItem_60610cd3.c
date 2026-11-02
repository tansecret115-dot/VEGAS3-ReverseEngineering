/* Module: pngu3266.dll
   Function: CheckMenuRadioItem
   Address: 60610cd3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::CheckMenuRadioItem(unsigned long,unsigned long,unsigned
   long) */

void __thiscall
XPNMenuButton::CheckMenuRadioItem(XPNMenuButton *this,ulong param_1,ulong param_2,ulong param_3)

{
                    /* 0x20cd3  845  ?CheckMenuRadioItem@XPNMenuButton@@QAEXKKK@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x3c))(param_1,param_2,param_3);
  return;
}


