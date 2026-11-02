/* Module: pngu3266.dll
   Function: XPNGroupBox
   Address: 605f59ea
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNGroupBox::XPNGroupBox(class XPNGroupBox const &) */

XPNGroupBox * __thiscall XPNGroupBox::XPNGroupBox(XPNGroupBox *this,XPNGroupBox *param_1)

{
  undefined4 uVar1;
  
                    /* 0x59ea  223  ??0XPNGroupBox@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


