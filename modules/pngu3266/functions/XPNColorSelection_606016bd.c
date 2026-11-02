/* Module: pngu3266.dll
   Function: XPNColorSelection
   Address: 606016bd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNColorSelection::XPNColorSelection(class XPNColorSelection const &) */

XPNColorSelection * __thiscall
XPNColorSelection::XPNColorSelection(XPNColorSelection *this,XPNColorSelection *param_1)

{
                    /* 0x116bd  198  ??0XPNColorSelection@@QAE@ABV0@@Z */
  XPNMenuButton::XPNMenuButton((XPNMenuButton *)this,(XPNMenuButton *)param_1);
  *(undefined ***)this = &CPNMenuButton::_vftable_;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined ***)this = &_vftable_;
  return this;
}


