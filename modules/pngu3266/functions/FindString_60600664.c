/* Module: pngu3266.dll
   Function: FindString
   Address: 60600664
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNListBox::FindString(char const *,unsigned long,int,int) */

long __thiscall
CPNListBox::FindString(CPNListBox *this,char *param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  
                    /* 0x10664  1051  ?FindString@CPNListBox@@UAEJPBDKHH@Z */
  if ((param_3 == 0) && (param_4 == 0)) {
    lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x1a2,param_2 - 1,(long)param_1);
  }
  else {
    lVar1 = -1;
  }
  return lVar1;
}


