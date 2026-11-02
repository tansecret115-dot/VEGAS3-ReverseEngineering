/* Module: pngu3266.dll
   Function: RemoveSubMenu
   Address: 60603780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCustomMenu::RemoveSubMenu(unsigned long) */

void __thiscall CPNCustomMenu::RemoveSubMenu(CPNCustomMenu *this,ulong param_1)

{
                    /* 0x13780  1775  ?RemoveSubMenu@CPNCustomMenu@@UAEXK@Z */
  CPNMenu::RemoveSubMenu((CPNMenu *)this,param_1 + 1);
  return;
}


