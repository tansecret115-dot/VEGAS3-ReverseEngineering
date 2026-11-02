/* Module: pngu3266.dll
   Function: HasFocus
   Address: 605f918e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::HasFocus(void)const  */

int __thiscall CPNWindow::HasFocus(CPNWindow *this)

{
  HWND pHVar1;
  HWND__ *pHVar2;
  
                    /* 0x918e  1448  ?HasFocus@CPNWindow@@UBEHXZ */
  pHVar1 = GetFocus();
  pHVar2 = GetHWND(this);
  return (uint)(pHVar1 == pHVar2);
}


