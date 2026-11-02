/* Module: pngu3266.dll
   Function: IsEnabled
   Address: 605f7695
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::IsEnabled(void)const  */

int __thiscall CPNWindow::IsEnabled(CPNWindow *this)

{
  HWND__ *hWnd;
  BOOL BVar1;
  
                    /* 0x7695  1501  ?IsEnabled@CPNWindow@@UBEHXZ */
  if (((byte)this[0xb] & 0x80) != 0) {
    return *(int *)(this + 0x58);
  }
  hWnd = GetHWND(this);
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


