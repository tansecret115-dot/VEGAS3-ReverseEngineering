/* Module: pngu3266.dll
   Function: CreatePopupMenu
   Address: 605fa5e3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::CreatePopupMenu(void) */

int __thiscall CPNMenu::CreatePopupMenu(CPNMenu *this)

{
  HMENU pHVar1;
  
                    /* 0xa5e3  937  ?CreatePopupMenu@CPNMenu@@UAEHXZ */
  pHVar1 = ::CreatePopupMenu();
  *(HMENU *)(this + 0x14) = pHVar1;
  return (uint)(pHVar1 != (HMENU)0x0);
}


