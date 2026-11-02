/* Module: pngu3266.dll
   Function: InsertSubMenu
   Address: 605fa72a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::InsertSubMenu(unsigned long,class CPNMenu &,char const
   *) */

void __thiscall CPNMenu::InsertSubMenu(CPNMenu *this,ulong param_1,CPNMenu *param_2,char *param_3)

{
                    /* 0xa72a  1489  ?InsertSubMenu@CPNMenu@@UAEXKAAV1@PBD@Z */
  InsertMenuA(*(HMENU *)(this + 0x14),param_1,0x410,*(UINT_PTR *)(param_2 + 0x14),param_3);
  return;
}


