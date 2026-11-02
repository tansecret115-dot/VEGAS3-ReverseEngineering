/* Module: pngu3266.dll
   Function: GetSelectionCount
   Address: 60600520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::GetSelectionCount(void)const  */

ulong __thiscall CPNListBox::GetSelectionCount(CPNListBox *this)

{
  ulong uVar1;
  
                    /* 0x10520  1347  ?GetSelectionCount@CPNListBox@@UBEKXZ */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,400,0,0);
  return uVar1;
}


