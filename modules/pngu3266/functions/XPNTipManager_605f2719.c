/* Module: pngu3266.dll
   Function: XPNTipManager
   Address: 605f2719
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTipManager::XPNTipManager(class XPNTipManager const &) */

void __thiscall XPNTipManager::XPNTipManager(XPNTipManager *this,XPNTipManager *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2719  286  ??0XPNTipManager@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNRouter::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = &_vftable_;
  return;
}


