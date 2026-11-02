/* Module: pngu3266.dll
   Function: IsListDropped
   Address: 60601613
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPopupList::IsListDropped(void) */

int __thiscall CPNPopupList::IsListDropped(CPNPopupList *this)

{
  long lVar1;
  
                    /* 0x11613  1508  ?IsListDropped@CPNPopupList@@UAEHXZ */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x157,0,0);
  return lVar1;
}


