/* Module: pngu3266.dll
   Function: ~CPNCustomMenu
   Address: 6060373e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCustomMenu::~CPNCustomMenu(void) */

void __thiscall CPNCustomMenu::~CPNCustomMenu(CPNCustomMenu *this)

{
                    /* 0x1373e  323  ??1CPNCustomMenu@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNMenu::~CPNMenu((CPNMenu *)this);
  return;
}


