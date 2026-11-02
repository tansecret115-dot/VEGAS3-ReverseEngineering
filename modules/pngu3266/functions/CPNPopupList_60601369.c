/* Module: pngu3266.dll
   Function: CPNPopupList
   Address: 60601369
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPopupList::CPNPopupList(void) */

CPNPopupList * __thiscall CPNPopupList::CPNPopupList(CPNPopupList *this)

{
                    /* 0x11369  114  ??0CPNPopupList@@QAE@XZ */
  XPNPopupList::XPNPopupList((XPNPopupList *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


