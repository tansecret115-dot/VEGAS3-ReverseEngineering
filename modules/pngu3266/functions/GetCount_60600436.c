/* Module: pngu3266.dll
   Function: GetCount
   Address: 60600436
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::GetCount(void)const  */

ulong __thiscall CPNListBox::GetCount(CPNListBox *this)

{
  ulong uVar1;
  
                    /* 0x10436  1155  ?GetCount@CPNListBox@@UBEKXZ */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x18b,0,0);
  return uVar1;
}


