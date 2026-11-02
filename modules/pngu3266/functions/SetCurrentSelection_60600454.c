/* Module: pngu3266.dll
   Function: SetCurrentSelection
   Address: 60600454
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNListBox::SetCurrentSelection(unsigned long) */

int __thiscall CPNListBox::SetCurrentSelection(CPNListBox *this,ulong param_1)

{
  long lVar1;
  
                    /* 0x10454  1879  ?SetCurrentSelection@CPNListBox@@UAEHK@Z */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x186,param_1,0);
  return lVar1;
}


