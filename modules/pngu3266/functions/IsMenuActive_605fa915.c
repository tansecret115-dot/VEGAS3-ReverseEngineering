/* Module: pngu3266.dll
   Function: IsMenuActive
   Address: 605fa915
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static int __cdecl CPNMenu::IsMenuActive(struct HMENU__ *) */

int __cdecl CPNMenu::IsMenuActive(HMENU__ *param_1)

{
  HMENU__ ***pppHVar1;
  uint uVar2;
  
                    /* 0xa915  1510  ?IsMenuActive@CPNMenu@@KAHPAUHMENU__@@@Z */
  uVar2 = 0;
  if (zm_ulTopOfStackIndex != 0) {
    pppHVar1 = &zm_ActiveMenuStack;
    do {
      if ((HMENU__ *)*pppHVar1 == param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      pppHVar1 = pppHVar1 + 1;
    } while (uVar2 < zm_ulTopOfStackIndex);
  }
  return 0;
}


