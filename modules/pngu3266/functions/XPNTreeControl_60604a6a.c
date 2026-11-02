/* Module: pngu3266.dll
   Function: XPNTreeControl
   Address: 60604a6a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNTreeControl::XPNTreeControl(class XPNTreeControl const &) */

XPNTreeControl * __thiscall
XPNTreeControl::XPNTreeControl(XPNTreeControl *this,XPNTreeControl *param_1)

{
  undefined4 uVar1;
  
                    /* 0x14a6a  290  ??0XPNTreeControl@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &_vftable_;
  return this;
}


