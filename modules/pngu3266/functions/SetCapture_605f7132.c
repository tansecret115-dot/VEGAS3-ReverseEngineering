/* Module: pngu3266.dll
   Function: SetCapture
   Address: 605f7132
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetCapture(void) */

void __thiscall CPNWindow::SetCapture(CPNWindow *this)

{
                    /* 0x7132  1856  ?SetCapture@CPNWindow@@UAEXXZ */
  if (((byte)this[0xb] & 0x80) != 0) {
    GetHWND(*(CPNWindow **)(this + 0x48));
  }
  *(undefined4 *)(this + 0x40) = 1;
  ::SetCapture(*(HWND *)(this + 0xc));
  return;
}


