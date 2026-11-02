/* Module: pngu3266.dll
   Function: CreateMenu
   Address: 605fa5cc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::CreateMenu(void) */

int __thiscall CPNMenu::CreateMenu(CPNMenu *this)

{
  HMENU pHVar1;
  
                    /* 0xa5cc  935  ?CreateMenu@CPNMenu@@UAEHXZ */
  pHVar1 = ::CreateMenu();
  *(HMENU *)(this + 0x14) = pHVar1;
  return (uint)(pHVar1 != (HMENU)0x0);
}


