/* Module: pngu3266.dll
   Function: XPNPopupList
   Address: 6060122a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPopupList::XPNPopupList(class XPNPopupList const &) */

XPNPopupList * __thiscall XPNPopupList::XPNPopupList(XPNPopupList *this,XPNPopupList *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1122a  256  ??0XPNPopupList@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &_vftable_;
  return this;
}


