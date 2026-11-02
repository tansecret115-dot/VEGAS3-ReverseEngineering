/* Module: pngu3266.dll
   Function: DetachWindowItem
   Address: 605f9171
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::DetachWindowItem(void) */

void __thiscall CPNWindow::DetachWindowItem(CPNWindow *this)

{
                    /* 0x9171  958  ?DetachWindowItem@CPNWindow@@UAEXXZ */
  if (*(CPNWindow **)(this + 0x48) != (CPNWindow *)0x0) {
    RemoveChild(*(CPNWindow **)(this + 0x48),this);
    *(undefined4 *)(this + 0x48) = 0;
  }
  UnsubclassWnd(this);
  return;
}


