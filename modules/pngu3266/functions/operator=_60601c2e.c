/* Module: pngu3266.dll
   Function: operator=
   Address: 60601c2e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNScrollingText & __thiscall XPNScrollingText::operator=(class XPNScrollingText
   const &) */

XPNScrollingText * __thiscall
XPNScrollingText::operator=(XPNScrollingText *this,XPNScrollingText *param_1)

{
                    /* 0x11c2e  549  ??4XPNScrollingText@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  CPNColor::operator=((CPNColor *)(this + 0xc0),(CPNColor *)(param_1 + 0xc0));
  CPNColor::operator=((CPNColor *)(this + 0xdf),(CPNColor *)(param_1 + 0xdf));
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
  return this;
}


