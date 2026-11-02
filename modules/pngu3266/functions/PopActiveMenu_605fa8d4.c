/* Module: pngu3266.dll
   Function: PopActiveMenu
   Address: 605fa8d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static struct HMENU__ * __cdecl CPNMenu::PopActiveMenu(void) */

HMENU__ * __cdecl CPNMenu::PopActiveMenu(void)

{
  HMENU__ *pHVar1;
  
                    /* 0xa8d4  1718  ?PopActiveMenu@CPNMenu@@KAPAUHMENU__@@XZ */
  pHVar1 = (HMENU__ *)0x0;
  if (zm_ulTopOfStackIndex != 0) {
    pHVar1 = *(HMENU__ **)(&DAT_60649ae4 + zm_ulTopOfStackIndex * 4);
    zm_ulTopOfStackIndex = zm_ulTopOfStackIndex - 1;
  }
  return pHVar1;
}


