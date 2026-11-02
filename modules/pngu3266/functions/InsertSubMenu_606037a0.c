/* Module: pngu3266.dll
   Function: InsertSubMenu
   Address: 606037a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCustomMenu::InsertSubMenu(unsigned long,class CPNMenu &,char
   const *) */

void __thiscall
CPNCustomMenu::InsertSubMenu(CPNCustomMenu *this,ulong param_1,CPNMenu *param_2,char *param_3)

{
                    /* 0x137a0  1488  ?InsertSubMenu@CPNCustomMenu@@UAEXKAAVCPNMenu@@PBD@Z */
  CPNMenu::InsertSubMenu((CPNMenu *)this,param_1 + 1,param_2,param_3);
  return;
}


