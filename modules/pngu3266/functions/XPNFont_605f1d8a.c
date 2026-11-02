/* Module: pngu3266.dll
   Function: XPNFont
   Address: 605f1d8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNFont::XPNFont(class XPNFont const &) */

void __thiscall XPNFont::XPNFont(XPNFont *this,XPNFont *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1d8a  218  ??0XPNFont@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &CPNGraphicResource::_vftable_;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = &_vftable_;
  return;
}


