/* Module: pngu3266.dll
   Function: GetMenuItemId
   Address: 60610c61
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNMenuButton::GetMenuItemId(unsigned long) */

ulong __thiscall XPNMenuButton::GetMenuItemId(XPNMenuButton *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x20c61  1256  ?GetMenuItemId@XPNMenuButton@@QAEKK@Z */
  uVar1 = (**(code **)(**(int **)(this + 0xc0) + 0x28))(param_1);
  return uVar1;
}


