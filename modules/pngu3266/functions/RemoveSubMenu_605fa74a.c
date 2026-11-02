/* Module: pngu3266.dll
   Function: RemoveSubMenu
   Address: 605fa74a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::RemoveSubMenu(unsigned long) */

void __thiscall CPNMenu::RemoveSubMenu(CPNMenu *this,ulong param_1)

{
                    /* 0xa74a  1776  ?RemoveSubMenu@CPNMenu@@UAEXK@Z */
  (**(code **)(*(int *)this + 0x68))();
  RemoveMenu(*(HMENU *)(this + 0x14),param_1,0x400);
  return;
}


