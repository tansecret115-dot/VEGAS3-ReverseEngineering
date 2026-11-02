/* Module: pngu3266.dll
   Function: XPNMenu
   Address: 605f38c2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMenu::XPNMenu(class XPNMenu const &) */

void __thiscall XPNMenu::XPNMenu(XPNMenu *this,XPNMenu *param_1)

{
  undefined4 uVar1;
  
                    /* 0x38c2  237  ??0XPNMenu@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &_vftable_;
  return;
}


