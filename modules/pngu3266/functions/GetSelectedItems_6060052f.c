/* Module: pngu3266.dll
   Function: GetSelectedItems
   Address: 6060052f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::GetSelectedItems(unsigned long *,unsigned
   int)const  */

ulong __thiscall CPNListBox::GetSelectedItems(CPNListBox *this,ulong *param_1,uint param_2)

{
  ulong uVar1;
  
                    /* 0x1052f  1344  ?GetSelectedItems@CPNListBox@@UBEKPAKI@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x191,param_2,(long)param_1);
  return uVar1;
}


