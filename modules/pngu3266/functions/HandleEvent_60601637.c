/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 60601637
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPopupList::HandleEvent(class CPNEvent &) */

void __thiscall CPNPopupList::HandleEvent(CPNPopupList *this,CPNEvent *param_1)

{
                    /* 0x11637  1435  ?HandleEvent@CPNPopupList@@UAEXAAVCPNEvent@@@Z */
  if (((*(int *)(param_1 + 8) == 4) && (*(int *)(param_1 + 0xc) == 0x84)) &&
     (*(int *)(param_1 + 0x1c) == 0xd)) {
    *(CPNPopupList **)(param_1 + 0x10) = this;
    (**(code **)(*(int *)this + 4))(param_1);
  }
  return;
}


