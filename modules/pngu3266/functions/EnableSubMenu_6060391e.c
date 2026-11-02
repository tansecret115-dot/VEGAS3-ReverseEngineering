/* Module: pngu3266.dll
   Function: EnableSubMenu
   Address: 6060391e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCustomMenu::EnableSubMenu(unsigned long,int) */

void __thiscall CPNCustomMenu::EnableSubMenu(CPNCustomMenu *this,ulong param_1,int param_2)

{
                    /* 0x1391e  1032  ?EnableSubMenu@CPNCustomMenu@@UAEXKH@Z */
  CPNMenu::EnableSubMenu((CPNMenu *)this,param_1 + 1,param_2);
  return;
}


