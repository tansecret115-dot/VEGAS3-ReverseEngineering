/* Module: pngu3266.dll
   Function: RemoveString
   Address: 606004fe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::RemoveString(unsigned long) */

ulong __thiscall CPNListBox::RemoveString(CPNListBox *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x104fe  1773  ?RemoveString@CPNListBox@@UAEKK@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x182,param_1,0);
  return uVar1;
}


