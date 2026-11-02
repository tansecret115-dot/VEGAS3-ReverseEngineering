/* Module: pngu3266.dll
   Function: CPNMenu
   Address: 605fa17c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMenu::CPNMenu(unsigned long) */

CPNMenu * __thiscall CPNMenu::CPNMenu(CPNMenu *this,ulong param_1)

{
  undefined4 uVar1;
  
                    /* 0xa17c  94  ??0CPNMenu@@QAE@K@Z */
  XPNMenu::XPNMenu((XPNMenu *)this,param_1);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &_vftable_;
  uVar1 = FUN_6061daa0(param_1);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0xc) = 1;
  return this;
}


