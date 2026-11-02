/* Module: pngu3266.dll
   Function: IsSelected
   Address: 60600567
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNListBox::IsSelected(unsigned long)const  */

int __thiscall CPNListBox::IsSelected(CPNListBox *this,ulong param_1)

{
  long lVar1;
  uint uVar2;
  
                    /* 0x10567  1519  ?IsSelected@CPNListBox@@UBEHK@Z */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x187,param_1,0);
  if (lVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)(lVar1 != 0);
  }
  return uVar2;
}


