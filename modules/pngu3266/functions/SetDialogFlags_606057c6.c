/* Module: pngu3266.dll
   Function: SetDialogFlags
   Address: 606057c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNBrowseDialog::SetDialogFlags(unsigned long) */

void __thiscall XPNBrowseDialog::SetDialogFlags(XPNBrowseDialog *this,ulong param_1)

{
                    /* 0x157c6  1893  ?SetDialogFlags@XPNBrowseDialog@@QAEXK@Z */
  *(ulong *)(this + 0xe8) = param_1;
  return;
}


