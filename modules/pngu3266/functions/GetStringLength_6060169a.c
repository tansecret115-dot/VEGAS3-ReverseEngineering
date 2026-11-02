/* Module: pngu3266.dll
   Function: GetStringLength
   Address: 6060169a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::GetStringLength(unsigned long)const  */

ulong __thiscall CPNPopupList::GetStringLength(CPNPopupList *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x1169a  1368  ?GetStringLength@CPNPopupList@@UBEKK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x149,param_1,0);
  return uVar1;
}


