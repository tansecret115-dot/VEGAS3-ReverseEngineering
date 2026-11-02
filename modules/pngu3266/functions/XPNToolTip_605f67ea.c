/* Module: pngu3266.dll
   Function: XPNToolTip
   Address: 605f67ea
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNToolTip::XPNToolTip(class XPNToolTip const &) */

XPNToolTip * __thiscall XPNToolTip::XPNToolTip(XPNToolTip *this,XPNToolTip *param_1)

{
                    /* 0x67ea  288  ??0XPNToolTip@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &_vftable_;
  return this;
}


