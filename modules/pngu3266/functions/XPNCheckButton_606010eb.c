/* Module: pngu3266.dll
   Function: XPNCheckButton
   Address: 606010eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCheckButton::XPNCheckButton(class XPNCheckButton const &) */

XPNCheckButton * __thiscall
XPNCheckButton::XPNCheckButton(XPNCheckButton *this,XPNCheckButton *param_1)

{
  undefined4 uVar1;
  
                    /* 0x110eb  194  ??0XPNCheckButton@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


