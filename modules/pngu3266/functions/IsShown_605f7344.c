/* Module: pngu3266.dll
   Function: IsShown
   Address: 605f7344
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::IsShown(void)const  */

int __thiscall CPNWindow::IsShown(CPNWindow *this)

{
  HWND__ *hWnd;
  BOOL BVar1;
  
                    /* 0x7344  1521  ?IsShown@CPNWindow@@UBEHXZ */
  if (((byte)this[0xb] & 0x80) != 0) {
    return *(int *)(this + 0x5c);
  }
  hWnd = GetHWND(this);
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


