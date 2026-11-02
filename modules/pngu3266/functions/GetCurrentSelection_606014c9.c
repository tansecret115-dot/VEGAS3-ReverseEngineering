/* Module: pngu3266.dll
   Function: GetCurrentSelection
   Address: 606014c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::GetCurrentSelection(void)const  */

ulong __thiscall CPNPopupList::GetCurrentSelection(CPNPopupList *this)

{
  ulong uVar1;
  
                    /* 0x114c9  1166  ?GetCurrentSelection@CPNPopupList@@UBEKXZ */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x147,0,0);
  return uVar1;
}


