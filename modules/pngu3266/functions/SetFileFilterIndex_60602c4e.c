/* Module: pngu3266.dll
   Function: SetFileFilterIndex
   Address: 60602c4e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNOpenFileDialog::SetFileFilterIndex(unsigned long) */

void __thiscall XPNOpenFileDialog::SetFileFilterIndex(XPNOpenFileDialog *this,ulong param_1)

{
                    /* 0x12c4e  1905  ?SetFileFilterIndex@XPNOpenFileDialog@@QAEXK@Z */
  *(ulong *)(this + 0x10c) = param_1;
  return;
}


