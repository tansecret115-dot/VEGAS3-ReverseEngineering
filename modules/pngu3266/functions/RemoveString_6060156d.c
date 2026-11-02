/* Module: pngu3266.dll
   Function: RemoveString
   Address: 6060156d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::RemoveString(unsigned long) */

ulong __thiscall CPNPopupList::RemoveString(CPNPopupList *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x1156d  1774  ?RemoveString@CPNPopupList@@UAEKK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x144,param_1,0);
  return uVar1;
}


