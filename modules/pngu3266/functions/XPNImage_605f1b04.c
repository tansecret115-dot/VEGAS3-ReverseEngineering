/* Module: pngu3266.dll
   Function: XPNImage
   Address: 605f1b04
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNImage::XPNImage(class XPNImage const &) */

void __thiscall XPNImage::XPNImage(XPNImage *this,XPNImage *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1b04  227  ??0XPNImage@@QAE@ABV0@@Z */
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
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  *(undefined ***)this = &_vftable_;
  return;
}


