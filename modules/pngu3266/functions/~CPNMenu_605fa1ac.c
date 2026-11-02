/* Module: pngu3266.dll
   Function: ~CPNMenu
   Address: 605fa1ac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNMenu::~CPNMenu(void) */

void __thiscall CPNMenu::~CPNMenu(CPNMenu *this)

{
                    /* 0xa1ac  343  ??1CPNMenu@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if ((*(HMENU *)(this + 0x14) != (HMENU)0x0) && (*(int *)(this + 0x10) == 0)) {
    DestroyMenu(*(HMENU *)(this + 0x14));
  }
  XPNMenu::~XPNMenu((XPNMenu *)this);
  return;
}


