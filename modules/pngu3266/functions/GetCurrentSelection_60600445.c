/* Module: pngu3266.dll
   Function: GetCurrentSelection
   Address: 60600445
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::GetCurrentSelection(void)const  */

ulong __thiscall CPNListBox::GetCurrentSelection(CPNListBox *this)

{
  ulong uVar1;
  
                    /* 0x10445  1165  ?GetCurrentSelection@CPNListBox@@UBEKXZ */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x188,0,0);
  return uVar1;
}


