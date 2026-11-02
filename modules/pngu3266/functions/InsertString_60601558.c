/* Module: pngu3266.dll
   Function: InsertString
   Address: 60601558
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::InsertString(char const *,unsigned long)
    */

ulong __thiscall CPNPopupList::InsertString(CPNPopupList *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  
                    /* 0x11558  1487  ?InsertString@CPNPopupList@@UAEKPBDK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x14a,param_2,(long)param_1);
  return uVar1;
}


