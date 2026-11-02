/* Module: pngu3266.dll
   Function: xPNRadioBtn
   Address: 605fcf7f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall xPNRadioBtn::xPNRadioBtn(class xPNRadioBtn const &) */

xPNRadioBtn * __thiscall xPNRadioBtn::xPNRadioBtn(xPNRadioBtn *this,xPNRadioBtn *param_1)

{
  undefined4 uVar1;
  
                    /* 0xcf7f  302  ??0xPNRadioBtn@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


