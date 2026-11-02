/* Module: pngu3266.dll
   Function: SetSelection
   Address: 60600467
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNListBox::SetSelection(unsigned long,int) */

int __thiscall CPNListBox::SetSelection(CPNListBox *this,ulong param_1,int param_2)

{
  long lVar1;
  
                    /* 0x10467  1999  ?SetSelection@CPNListBox@@UAEHKH@Z */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x185,param_2,param_1);
  return lVar1;
}


