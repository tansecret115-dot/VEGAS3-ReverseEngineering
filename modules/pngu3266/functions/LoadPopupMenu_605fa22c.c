/* Module: pngu3266.dll
   Function: LoadPopupMenu
   Address: 605fa22c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::LoadPopupMenu(unsigned long) */

int __thiscall CPNMenu::LoadPopupMenu(CPNMenu *this,ulong param_1)

{
  int iVar1;
  
                    /* 0xa22c  1544  ?LoadPopupMenu@CPNMenu@@UAEHK@Z */
  iVar1 = FUN_6061db20(param_1);
  *(int *)(this + 0x14) = iVar1;
  *(uint *)(this + 0xc) = (uint)(iVar1 != 0);
  return (uint)(iVar1 != 0);
}


