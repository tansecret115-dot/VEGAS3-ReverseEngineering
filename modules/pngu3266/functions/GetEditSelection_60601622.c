/* Module: pngu3266.dll
   Function: GetEditSelection
   Address: 60601622
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::GetEditSelection(unsigned long &,unsigned
   long &)const  */

ulong __thiscall CPNPopupList::GetEditSelection(CPNPopupList *this,ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x11622  1185  ?GetEditSelection@CPNPopupList@@UBEKAAK0@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x140,(uint)param_1,(long)param_2);
  return uVar1;
}


