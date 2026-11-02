/* Module: pngu3266.dll
   Function: InsertString
   Address: 606004e9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::InsertString(char const *,unsigned long) */

ulong __thiscall CPNListBox::InsertString(CPNListBox *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  
                    /* 0x104e9  1486  ?InsertString@CPNListBox@@UAEKPBDK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x181,param_2,(long)param_1);
  return uVar1;
}


