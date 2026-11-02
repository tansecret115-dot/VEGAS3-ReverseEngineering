/* Module: pngu3266.dll
   Function: RemoveAllToolTips
   Address: 605fa112
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::RemoveAllToolTips(void) */

void __thiscall CPNWindow::RemoveAllToolTips(CPNWindow *this)

{
                    /* 0xa112  1757  ?RemoveAllToolTips@CPNWindow@@UAEXXZ */
  if (*(int **)(this + 0x7c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x605fa11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x7c) + 0x14))();
    return;
  }
  return;
}


