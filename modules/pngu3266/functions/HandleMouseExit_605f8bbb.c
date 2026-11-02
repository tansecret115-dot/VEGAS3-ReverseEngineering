/* Module: pngu3266.dll
   Function: HandleMouseExit
   Address: 605f8bbb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall CPNWindow::HandleMouseExit(void) */

void __thiscall CPNWindow::HandleMouseExit(CPNWindow *this)

{
                    /* 0x8bbb  1444  ?HandleMouseExit@CPNWindow@@AAEXXZ */
  if ((*(uint *)(this + 0x4c) & 4) == 0) {
    *(undefined4 *)(this + 0x18) = 0;
    *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffd | 4;
  }
  return;
}


