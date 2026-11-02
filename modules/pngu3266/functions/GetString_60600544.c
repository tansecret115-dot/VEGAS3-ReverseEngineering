/* Module: pngu3266.dll
   Function: GetString
   Address: 60600544
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::GetString(char *,unsigned long,unsigned
   long)const  */

ulong __thiscall CPNListBox::GetString(CPNListBox *this,char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
                    /* 0x10544  1365  ?GetString@CPNListBox@@UBEKPADKK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x189,param_3,(long)param_1);
  if ((uVar1 == 0xffffffff) || ((int)param_2 <= (int)uVar1)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


