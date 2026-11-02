/* Module: pngu3266.dll
   Function: XPNTimer
   Address: 605f2481
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTimer::XPNTimer(class XPNTimer const &) */

void __thiscall XPNTimer::XPNTimer(XPNTimer *this,XPNTimer *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2481  284  ??0XPNTimer@@QAE@ABV0@@Z */
  *(undefined ***)this = &PTR_LAB_606249b8;
  uVar1 = *(undefined4 *)((-(uint)(param_1 != (XPNTimer *)0x0) & (uint)(param_1 + 4)) + 4);
  *(undefined ***)(this + 4) = &CPNObject::_vftable_;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  return;
}


