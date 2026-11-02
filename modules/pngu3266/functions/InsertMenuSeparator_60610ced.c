/* Module: pngu3266.dll
   Function: InsertMenuSeparator
   Address: 60610ced
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::InsertMenuSeparator(unsigned long) */

void __thiscall XPNMenuButton::InsertMenuSeparator(XPNMenuButton *this,ulong param_1)

{
                    /* 0x20ced  1482  ?InsertMenuSeparator@XPNMenuButton@@QAEXK@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x4c))(param_1);
  return;
}


