/* Module: pngu3266.dll
   Function: operator=
   Address: 605fc838
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNAnimateCtl & __thiscall XPNAnimateCtl::operator=(class XPNAnimateCtl const &) */

XPNAnimateCtl * __thiscall XPNAnimateCtl::operator=(XPNAnimateCtl *this,XPNAnimateCtl *param_1)

{
                    /* 0xc838  508  ??4XPNAnimateCtl@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  CPNColor::operator=((CPNColor *)(this + 0xc4),(CPNColor *)(param_1 + 0xc4));
  *(undefined4 *)(this + 0xe3) = *(undefined4 *)(param_1 + 0xe3);
  *(undefined4 *)(this + 0xe7) = *(undefined4 *)(param_1 + 0xe7);
  *(undefined4 *)(this + 0xeb) = *(undefined4 *)(param_1 + 0xeb);
  *(undefined4 *)(this + 0xef) = *(undefined4 *)(param_1 + 0xef);
  *(undefined4 *)(this + 0xf3) = *(undefined4 *)(param_1 + 0xf3);
  *(undefined4 *)(this + 0xf7) = *(undefined4 *)(param_1 + 0xf7);
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined4 *)(this + 0xff) = *(undefined4 *)(param_1 + 0xff);
  *(undefined4 *)(this + 0x103) = *(undefined4 *)(param_1 + 0x103);
  *(undefined4 *)(this + 0x107) = *(undefined4 *)(param_1 + 0x107);
  *(undefined4 *)(this + 0x10b) = *(undefined4 *)(param_1 + 0x10b);
  *(undefined4 *)(this + 0x10f) = *(undefined4 *)(param_1 + 0x10f);
  return this;
}


