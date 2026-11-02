/* Module: pngu3266.dll
   Function: operator=
   Address: 60607379
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNCustomText & __thiscall XPNCustomText::operator=(class XPNCustomText const &) */

XPNCustomText * __thiscall XPNCustomText::operator=(XPNCustomText *this,XPNCustomText *param_1)

{
                    /* 0x17379  520  ??4XPNCustomText@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_60618e60(this + 0xc4,(int *)(param_1 + 0xc4));
  CPNColor::operator=((CPNColor *)(this + 0xd0),(CPNColor *)(param_1 + 0xd0));
  CPNColor::operator=((CPNColor *)(this + 0xef),(CPNColor *)(param_1 + 0xef));
  *(undefined4 *)(this + 0x10e) = *(undefined4 *)(param_1 + 0x10e);
  CPNColor::operator=((CPNColor *)(this + 0x112),(CPNColor *)(param_1 + 0x112));
  *(undefined4 *)(this + 0x131) = *(undefined4 *)(param_1 + 0x131);
  *(undefined4 *)(this + 0x135) = *(undefined4 *)(param_1 + 0x135);
  *(undefined4 *)(this + 0x139) = *(undefined4 *)(param_1 + 0x139);
  *(undefined4 *)(this + 0x13d) = *(undefined4 *)(param_1 + 0x13d);
  *(undefined4 *)(this + 0x141) = *(undefined4 *)(param_1 + 0x141);
  *(undefined4 *)(this + 0x145) = *(undefined4 *)(param_1 + 0x145);
  return this;
}


