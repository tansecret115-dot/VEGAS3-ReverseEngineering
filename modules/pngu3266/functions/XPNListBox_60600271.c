/* Module: pngu3266.dll
   Function: XPNListBox
   Address: 60600271
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNListBox::XPNListBox(class XPNListBox const &) */

XPNListBox * __thiscall XPNListBox::XPNListBox(XPNListBox *this,XPNListBox *param_1)

{
  undefined4 uVar1;
  
                    /* 0x10271  234  ??0XPNListBox@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


