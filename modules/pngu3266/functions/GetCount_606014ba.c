/* Module: pngu3266.dll
   Function: GetCount
   Address: 606014ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::GetCount(void)const  */

ulong __thiscall CPNPopupList::GetCount(CPNPopupList *this)

{
  ulong uVar1;
  
                    /* 0x114ba  1159  ?GetCount@CPNPopupList@@UBEKXZ */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x146,0,0);
  return uVar1;
}


