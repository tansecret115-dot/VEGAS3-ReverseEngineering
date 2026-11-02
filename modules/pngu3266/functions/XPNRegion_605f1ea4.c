/* Module: pngu3266.dll
   Function: XPNRegion
   Address: 605f1ea4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNRegion::XPNRegion(class XPNRegion const &) */

void __thiscall XPNRegion::XPNRegion(XPNRegion *this,XPNRegion *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1ea4  264  ??0XPNRegion@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &_vftable_;
  return;
}


