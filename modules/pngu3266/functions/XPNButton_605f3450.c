/* Module: pngu3266.dll
   Function: XPNButton
   Address: 605f3450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNButton::XPNButton(class XPNButton const &) */

XPNButton * __thiscall XPNButton::XPNButton(XPNButton *this,XPNButton *param_1)

{
  undefined4 uVar1;
  
                    /* 0x3450  192  ??0XPNButton@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  CPNColor::CPNColor((CPNColor *)(this + 0xd8),(CPNColor *)(param_1 + 0xd8));
  uVar1 = *(undefined4 *)(param_1 + 0xf7);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xf7) = uVar1;
  return this;
}


