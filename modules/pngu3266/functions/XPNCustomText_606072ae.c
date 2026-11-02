/* Module: pngu3266.dll
   Function: XPNCustomText
   Address: 606072ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCustomText::XPNCustomText(class XPNCustomText const &) */

XPNCustomText * __thiscall XPNCustomText::XPNCustomText(XPNCustomText *this,XPNCustomText *param_1)

{
  undefined4 uVar1;
  
                    /* 0x172ae  206  ??0XPNCustomText@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_60618bd0(this + 0xc4,(int *)(param_1 + 0xc4));
  CPNColor::CPNColor((CPNColor *)(this + 0xd0),(CPNColor *)(param_1 + 0xd0));
  CPNColor::CPNColor((CPNColor *)(this + 0xef),(CPNColor *)(param_1 + 0xef));
  *(undefined4 *)(this + 0x10e) = *(undefined4 *)(param_1 + 0x10e);
  CPNColor::CPNColor((CPNColor *)(this + 0x112),(CPNColor *)(param_1 + 0x112));
  *(undefined4 *)(this + 0x131) = *(undefined4 *)(param_1 + 0x131);
  *(undefined4 *)(this + 0x135) = *(undefined4 *)(param_1 + 0x135);
  *(undefined4 *)(this + 0x139) = *(undefined4 *)(param_1 + 0x139);
  *(undefined4 *)(this + 0x13d) = *(undefined4 *)(param_1 + 0x13d);
  *(undefined4 *)(this + 0x141) = *(undefined4 *)(param_1 + 0x141);
  *(undefined4 *)(this + 0x145) = *(undefined4 *)(param_1 + 0x145);
  *(undefined ***)this = &_vftable_;
  return this;
}


