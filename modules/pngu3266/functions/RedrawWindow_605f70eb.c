/* Module: pngu3266.dll
   Function: RedrawWindow
   Address: 605f70eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::RedrawWindow(void) */

void __thiscall CPNWindow::RedrawWindow(CPNWindow *this)

{
  BOOL BVar1;
  tagRECT local_14;
  
                    /* 0x70eb  1741  ?RedrawWindow@CPNWindow@@UAEXXZ */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    BVar1 = GetUpdateRect(*(HWND *)(this + 0xc),&local_14,0);
    if (BVar1 != 0) {
      ::RedrawWindow(*(HWND *)(this + 0xc),&local_14,(HRGN)0x0,0x185);
    }
  }
  return;
}


