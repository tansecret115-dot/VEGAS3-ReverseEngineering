/* Module: pngu3266.dll
   Function: SetFocusDrawingOptions
   Address: 605f9d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetFocusDrawingOptions(unsigned long) */

void __thiscall CPNWindow::SetFocusDrawingOptions(CPNWindow *this,ulong param_1)

{
                    /* 0x9d00  1909  ?SetFocusDrawingOptions@CPNWindow@@QAEXK@Z */
  *(ulong *)(this + 0x38) = param_1;
  return;
}


