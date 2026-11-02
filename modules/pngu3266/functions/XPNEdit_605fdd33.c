/* Module: pngu3266.dll
   Function: XPNEdit
   Address: 605fdd33
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNEdit::XPNEdit(class XPNEdit const &) */

XPNEdit * __thiscall XPNEdit::XPNEdit(XPNEdit *this,XPNEdit *param_1)

{
  undefined4 uVar1;
  
                    /* 0xdd33  215  ??0XPNEdit@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


