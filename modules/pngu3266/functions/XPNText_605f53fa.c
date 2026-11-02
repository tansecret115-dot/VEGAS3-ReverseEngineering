/* Module: pngu3266.dll
   Function: XPNText
   Address: 605f53fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNText::XPNText(class XPNText const &) */

XPNText * __thiscall XPNText::XPNText(XPNText *this,XPNText *param_1)

{
  undefined4 uVar1;
  
                    /* 0x53fa  278  ??0XPNText@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


