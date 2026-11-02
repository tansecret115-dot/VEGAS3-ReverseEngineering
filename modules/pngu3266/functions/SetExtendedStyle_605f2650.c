/* Module: pngu3266.dll
   Function: SetExtendedStyle
   Address: 605f2650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetExtendedStyle(unsigned long) */

void __thiscall CPNWindow::SetExtendedStyle(CPNWindow *this,ulong param_1)

{
                    /* 0x2650  1901  ?SetExtendedStyle@CPNWindow@@QAEXK@Z
                       0x2650  2029  ?SetTimePosted@CPNEvent@@QAEXK@Z */
  *(ulong *)(this + 0x14) = param_1;
  return;
}


