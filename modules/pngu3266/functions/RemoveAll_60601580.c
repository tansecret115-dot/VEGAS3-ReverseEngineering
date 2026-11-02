/* Module: pngu3266.dll
   Function: RemoveAll
   Address: 60601580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPopupList::RemoveAll(void) */

void __thiscall CPNPopupList::RemoveAll(CPNPopupList *this)

{
                    /* 0x11580  1751  ?RemoveAll@CPNPopupList@@UAEXXZ */
  CPNWindow::SendMessageA((CPNWindow *)this,0x14b,0,0);
  return;
}


