/* Module: pngu3266.dll
   Function: SetEditSelection
   Address: 606015f4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPopupList::SetEditSelection(unsigned short,unsigned short) */

void __thiscall CPNPopupList::SetEditSelection(CPNPopupList *this,ushort param_1,ushort param_2)

{
                    /* 0x115f4  1900  ?SetEditSelection@CPNPopupList@@UAEXGG@Z */
  CPNWindow::SendMessageA((CPNWindow *)this,0x142,0,CONCAT22(param_2,param_1));
  return;
}


