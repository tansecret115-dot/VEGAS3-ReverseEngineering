/* Module: pngu3266.dll
   Function: GetSubMenu
   Address: 6060378e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCustomMenu::GetSubMenu(unsigned long,class CPNMenu &) */

void __thiscall CPNCustomMenu::GetSubMenu(CPNCustomMenu *this,ulong param_1,CPNMenu *param_2)

{
                    /* 0x1378e  1375  ?GetSubMenu@CPNCustomMenu@@UAEXKAAVCPNMenu@@@Z */
  CPNMenu::GetSubMenu((CPNMenu *)this,param_1 + 1,param_2);
  return;
}


