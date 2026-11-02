/* Module: pngu3266.dll
   Function: PushActiveMenu
   Address: 605fa8ef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static void __cdecl CPNMenu::PushActiveMenu(struct HMENU__ *) */

void __cdecl CPNMenu::PushActiveMenu(HMENU__ *param_1)

{
                    /* 0xa8ef  1727  ?PushActiveMenu@CPNMenu@@KAXPAUHMENU__@@@Z */
  if (zm_ulTopOfStackIndex < 0x10) {
    zm_bShouldHideMenu = 1;
    (&zm_ActiveMenuStack)[zm_ulTopOfStackIndex] = (HMENU__ **)param_1;
    zm_ulTopOfStackIndex = zm_ulTopOfStackIndex + 1;
  }
  return;
}


