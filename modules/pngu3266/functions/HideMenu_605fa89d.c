/* Module: pngu3266.dll
   Function: HideMenu
   Address: 605fa89d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::HideMenu(void) */

void __thiscall CPNMenu::HideMenu(CPNMenu *this)

{
  int iVar1;
  
                    /* 0xa89d  1454  ?HideMenu@CPNMenu@@UAEXXZ */
  if (zm_bShouldHideMenu != 0) {
    iVar1 = IsMenuActive(*(HMENU__ **)(this + 0x14));
    if (iVar1 != 0) {
      keybd_event('\x12','\0',0,0);
      keybd_event('\x12','\0',2,0);
      zm_bShouldHideMenu = 0;
    }
  }
  return;
}


