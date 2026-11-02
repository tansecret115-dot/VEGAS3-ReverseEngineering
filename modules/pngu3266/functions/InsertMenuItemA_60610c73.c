/* Module: pngu3266.dll
   Function: InsertMenuItemA
   Address: 60610c73
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNMenuButton::InsertMenuItemA(unsigned long,unsigned long,char const *)
    */

void __thiscall
XPNMenuButton::InsertMenuItemA(XPNMenuButton *this,ulong param_1,ulong param_2,char *param_3)

{
                    /* 0x20c73  1481  ?InsertMenuItemA@XPNMenuButton@@QAEXKKPBD@Z */
  (**(code **)(**(int **)(this + 0xc0) + 0x44))(param_1,param_2,param_3);
  return;
}


