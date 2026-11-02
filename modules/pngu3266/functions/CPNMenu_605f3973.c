/* Module: pngu3266.dll
   Function: CPNMenu
   Address: 605f3973
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMenu::CPNMenu(class CPNMenu const &) */

CPNMenu * __thiscall CPNMenu::CPNMenu(CPNMenu *this,CPNMenu *param_1)

{
                    /* 0x3973  93  ??0CPNMenu@@QAE@ABV0@@Z */
  XPNMenu::XPNMenu((XPNMenu *)this,(XPNMenu *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &_vftable_;
  return this;
}


