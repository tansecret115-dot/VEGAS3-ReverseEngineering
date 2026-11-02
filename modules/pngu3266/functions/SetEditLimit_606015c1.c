/* Module: pngu3266.dll
   Function: SetEditLimit
   Address: 606015c1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPopupList::SetEditLimit(unsigned long) */

void __thiscall CPNPopupList::SetEditLimit(CPNPopupList *this,ulong param_1)

{
                    /* 0x115c1  1899  ?SetEditLimit@CPNPopupList@@UAEXK@Z */
  CPNWindow::SendMessageA((CPNWindow *)this,0x141,param_1,0);
  return;
}


