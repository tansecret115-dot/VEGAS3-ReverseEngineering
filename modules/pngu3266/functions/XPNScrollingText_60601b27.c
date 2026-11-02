/* Module: pngu3266.dll
   Function: XPNScrollingText
   Address: 60601b27
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNScrollingText::XPNScrollingText(class XPNScrollingText const &) */

XPNScrollingText * __thiscall
XPNScrollingText::XPNScrollingText(XPNScrollingText *this,XPNScrollingText *param_1)

{
  undefined4 uVar1;
  
                    /* 0x11b27  273  ??0XPNScrollingText@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  CPNColor::CPNColor((CPNColor *)(this + 0xc0),(CPNColor *)(param_1 + 0xc0));
  CPNColor::CPNColor((CPNColor *)(this + 0xdf),(CPNColor *)(param_1 + 0xdf));
  *(undefined4 *)(this + 0xfe) = *(undefined4 *)(param_1 + 0xfe);
  *(undefined4 *)(this + 0x102) = *(undefined4 *)(param_1 + 0x102);
  *(undefined4 *)(this + 0x106) = *(undefined4 *)(param_1 + 0x106);
  *(undefined4 *)(this + 0x10a) = *(undefined4 *)(param_1 + 0x10a);
  *(undefined4 *)(this + 0x10e) = *(undefined4 *)(param_1 + 0x10e);
  *(undefined4 *)(this + 0x112) = *(undefined4 *)(param_1 + 0x112);
  *(undefined4 *)(this + 0x116) = *(undefined4 *)(param_1 + 0x116);
  *(undefined4 *)(this + 0x11a) = *(undefined4 *)(param_1 + 0x11a);
  *(undefined4 *)(this + 0x11e) = *(undefined4 *)(param_1 + 0x11e);
  *(undefined4 *)(this + 0x122) = *(undefined4 *)(param_1 + 0x122);
  *(undefined4 *)(this + 0x126) = *(undefined4 *)(param_1 + 0x126);
  *(undefined4 *)(this + 0x12a) = *(undefined4 *)(param_1 + 0x12a);
  *(undefined4 *)(this + 0x12e) = *(undefined4 *)(param_1 + 0x12e);
  *(undefined4 *)(this + 0x132) = *(undefined4 *)(param_1 + 0x132);
  *(undefined4 *)(this + 0x136) = *(undefined4 *)(param_1 + 0x136);
  *(undefined4 *)(this + 0x13a) = *(undefined4 *)(param_1 + 0x13a);
  *(undefined ***)this = &_vftable_;
  return this;
}


