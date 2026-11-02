/* Module: pngu3266.dll
   Function: ~XPNMenu
   Address: 6060dc2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNMenu::~XPNMenu(void) */

void __thiscall XPNMenu::~XPNMenu(XPNMenu *this)

{
                    /* 0x1dc2f  402  ??1XPNMenu@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


