/* Module: pngu3266.dll
   Function: Detach
   Address: 605f7790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Detach(void) */

void __thiscall CPNWindow::Detach(CPNWindow *this)

{
  void *this_00;
  
                    /* 0x7790  955  ?Detach@CPNWindow@@UAEXXZ */
  this_00 = (void *)PNGuiGetMapHandle();
  if (*(uint *)(this + 0xc) != 0) {
    FUN_60619e20(this_00,*(uint *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}


