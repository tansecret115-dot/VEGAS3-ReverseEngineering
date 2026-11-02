/* Module: pngu3266.dll
   Function: Destroy
   Address: 605f6af3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Destroy(void) */

void __thiscall CPNWindow::Destroy(CPNWindow *this)

{
  BOOL BVar1;
  
                    /* 0x6af3  942  ?Destroy@CPNWindow@@UAEXXZ */
  *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 0x10;
  if (*(XPNTimer **)(this + 0x18) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x18),0);
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(XPNTimer **)(this + 0x20) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(XPNTimer **)(this + 0x1c) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(CPNWindow **)(this + 0x48) != (CPNWindow *)0x0) {
    RemoveChild(*(CPNWindow **)(this + 0x48),this);
  }
  if (((byte)this[0xb] & 0x80) == 0) {
    if (*(HWND *)(this + 0xc) != (HWND)0x0) {
      BVar1 = IsWindow(*(HWND *)(this + 0xc));
      if (BVar1 != 0) {
        DestroyWindow(*(HWND *)(this + 0xc));
      }
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}


