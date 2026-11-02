/* Module: pngu3266.dll
   Function: XPNProgress
   Address: 606019ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNProgress::XPNProgress(class XPNProgress const &) */

XPNProgress * __thiscall XPNProgress::XPNProgress(XPNProgress *this,XPNProgress *param_1)

{
  undefined4 uVar1;
  
                    /* 0x119ec  258  ??0XPNProgress@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


