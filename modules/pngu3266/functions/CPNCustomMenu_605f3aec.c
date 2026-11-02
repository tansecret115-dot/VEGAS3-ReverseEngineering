/* Module: pngu3266.dll
   Function: CPNCustomMenu
   Address: 605f3aec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCustomMenu::CPNCustomMenu(class CPNCustomMenu const &) */

CPNCustomMenu * __thiscall CPNCustomMenu::CPNCustomMenu(CPNCustomMenu *this,CPNCustomMenu *param_1)

{
                    /* 0x3aec  47  ??0CPNCustomMenu@@QAE@ABV0@@Z */
  XPNMenu::XPNMenu((XPNMenu *)this,(XPNMenu *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &_vftable_;
  return this;
}


