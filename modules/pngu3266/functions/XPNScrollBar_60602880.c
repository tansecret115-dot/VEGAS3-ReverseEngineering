/* Module: pngu3266.dll
   Function: XPNScrollBar
   Address: 60602880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNScrollBar::XPNScrollBar(class XPNScrollBar const &) */

XPNScrollBar * __thiscall XPNScrollBar::XPNScrollBar(XPNScrollBar *this,XPNScrollBar *param_1)

{
  undefined4 uVar1;
  
                    /* 0x12880  268  ??0XPNScrollBar@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


