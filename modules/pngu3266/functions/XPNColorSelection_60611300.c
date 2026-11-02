/* Module: pngu3266.dll
   Function: XPNColorSelection
   Address: 60611300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNColorSelection::XPNColorSelection(void) */

XPNColorSelection * __thiscall XPNColorSelection::XPNColorSelection(XPNColorSelection *this)

{
                    /* 0x21300  199  ??0XPNColorSelection@@QAE@XZ */
  CPNMenuButton::CPNMenuButton((CPNMenuButton *)this);
  FUN_6061a4b0((undefined4 *)(this + 0xe0));
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


