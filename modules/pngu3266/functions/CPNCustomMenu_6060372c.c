/* Module: pngu3266.dll
   Function: CPNCustomMenu
   Address: 6060372c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCustomMenu::CPNCustomMenu(void) */

CPNCustomMenu * __thiscall CPNCustomMenu::CPNCustomMenu(CPNCustomMenu *this)

{
                    /* 0x1372c  48  ??0CPNCustomMenu@@QAE@XZ */
  CPNMenu::CPNMenu((CPNMenu *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


