/* Module: pngu3266.dll
   Function: XPNMenu
   Address: 6060dbef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMenu::XPNMenu(void) */

XPNMenu * __thiscall XPNMenu::XPNMenu(XPNMenu *this)

{
                    /* 0x1dbef  239  ??0XPNMenu@@QAE@XZ */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}


