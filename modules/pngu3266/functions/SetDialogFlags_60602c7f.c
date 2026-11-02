/* Module: pngu3266.dll
   Function: SetDialogFlags
   Address: 60602c7f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNOpenFileDialog::SetDialogFlags(unsigned long) */

void __thiscall XPNOpenFileDialog::SetDialogFlags(XPNOpenFileDialog *this,ulong param_1)

{
                    /* 0x12c7f  1894  ?SetDialogFlags@XPNOpenFileDialog@@QAEXK@Z */
  *(ulong *)(this + 0x110) = param_1;
  return;
}


