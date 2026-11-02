/* Module: pngu3266.dll
   Function: XPNMenu
   Address: 6060dc0c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMenu::XPNMenu(unsigned long) */

XPNMenu * __thiscall XPNMenu::XPNMenu(XPNMenu *this,ulong param_1)

{
                    /* 0x1dc0c  238  ??0XPNMenu@@QAE@K@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(ulong *)(this + 8) = param_1;
  *(undefined ***)this = &_vftable_;
  return this;
}


