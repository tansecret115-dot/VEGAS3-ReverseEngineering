/* Module: pngu3266.dll
   Function: CPNMenu
   Address: 605fa162
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMenu::CPNMenu(void) */

CPNMenu * __thiscall CPNMenu::CPNMenu(CPNMenu *this)

{
                    /* 0xa162  95  ??0CPNMenu@@QAE@XZ */
  XPNMenu::XPNMenu((XPNMenu *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


