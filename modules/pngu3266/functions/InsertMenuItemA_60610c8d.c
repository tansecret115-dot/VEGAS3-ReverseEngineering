/* Module: pngu3266.dll
   Function: InsertMenuItemA
   Address: 60610c8d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::InsertMenuItemA(unsigned long,unsigned long,unsigned long)
    */

void __thiscall
XPNMenuButton::InsertMenuItemA(XPNMenuButton *this,ulong param_1,ulong param_2,ulong param_3)

{
                    /* 0x20c8d  1480  ?InsertMenuItemA@XPNMenuButton@@QAEXKKK@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x40))(param_1,param_2,param_3);
  return;
}


