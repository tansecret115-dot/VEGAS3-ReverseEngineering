/* Module: pngu3266.dll
   Function: MarkForDeletion
   Address: 605f2eba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::MarkForDeletion(int) */

void __thiscall CPNWindow::MarkForDeletion(CPNWindow *this,int param_1)

{
                    /* 0x2eba  1567  ?MarkForDeletion@CPNWindow@@QAEXH@Z */
  *(int *)(this + 0xb4) = param_1;
  return;
}


