/* Module: pngu3266.dll
   Function: CPNPopupList
   Address: 606012b5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPopupList::CPNPopupList(class CPNPopupList const &) */

CPNPopupList * __thiscall CPNPopupList::CPNPopupList(CPNPopupList *this,CPNPopupList *param_1)

{
  undefined4 uVar1;
  
                    /* 0x112b5  113  ??0CPNPopupList@@QAE@ABV0@@Z */
  XPNPopupList::XPNPopupList((XPNPopupList *)this,(XPNPopupList *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc0) = uVar1;
  return this;
}


