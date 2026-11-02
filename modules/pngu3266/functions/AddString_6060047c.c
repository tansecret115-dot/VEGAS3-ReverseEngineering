/* Module: pngu3266.dll
   Function: AddString
   Address: 6060047c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::AddString(char const *) */

ulong __thiscall CPNListBox::AddString(CPNListBox *this,char *param_1)

{
  ulong uVar1;
  
                    /* 0x1047c  777  ?AddString@CPNListBox@@UAEKPBD@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x180,0,(long)param_1);
  return uVar1;
}


