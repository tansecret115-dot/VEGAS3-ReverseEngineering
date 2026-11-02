/* Module: pngu3266.dll
   Function: Detach
   Address: 605fa342
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct HMENU__ * __thiscall CPNMenu::Detach(void) */

HMENU__ * __thiscall CPNMenu::Detach(CPNMenu *this)

{
  HMENU__ *pHVar1;
  
                    /* 0xa342  952  ?Detach@CPNMenu@@QAEPAUHMENU__@@XZ */
  pHVar1 = *(HMENU__ **)(this + 0x14);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return pHVar1;
}


