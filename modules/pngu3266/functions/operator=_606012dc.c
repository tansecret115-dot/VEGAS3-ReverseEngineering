/* Module: pngu3266.dll
   Function: operator=
   Address: 606012dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPopupList & __thiscall CPNPopupList::operator=(class CPNPopupList const &) */

CPNPopupList * __thiscall CPNPopupList::operator=(CPNPopupList *this,CPNPopupList *param_1)

{
                    /* 0x112dc  479  ??4CPNPopupList@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  return this;
}


