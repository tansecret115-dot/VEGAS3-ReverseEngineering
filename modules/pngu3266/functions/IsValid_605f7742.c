/* Module: pngu3266.dll
   Function: IsValid
   Address: 605f7742
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::IsValid(void)const  */

int __thiscall CPNWindow::IsValid(CPNWindow *this)

{
  BOOL BVar1;
  
                    /* 0x7742  1526  ?IsValid@CPNWindow@@UBEHXZ */
  if ((*(HWND *)(this + 0xc) != (HWND)0x0) && (BVar1 = IsWindow(*(HWND *)(this + 0xc)), BVar1 != 0))
  {
    return 1;
  }
  if (((byte)this[0xb] & 0x80) != 0) {
    return 1;
  }
  return 0;
}


