/* Module: pngu3266.dll
   Function: SetCurrentSelection
   Address: 606014d8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPopupList::SetCurrentSelection(unsigned long) */

int __thiscall CPNPopupList::SetCurrentSelection(CPNPopupList *this,ulong param_1)

{
  long lVar1;
  
                    /* 0x114d8  1880  ?SetCurrentSelection@CPNPopupList@@UAEHK@Z */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x14e,param_1,0);
  return lVar1;
}


