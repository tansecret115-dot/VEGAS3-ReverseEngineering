/* Module: pngu3266.dll
   Function: AddString
   Address: 606014eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::AddString(char const *) */

ulong __thiscall CPNPopupList::AddString(CPNPopupList *this,char *param_1)

{
  ulong uVar1;
  
                    /* 0x114eb  779  ?AddString@CPNPopupList@@UAEKPBD@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x143,0,(long)param_1);
  return uVar1;
}


