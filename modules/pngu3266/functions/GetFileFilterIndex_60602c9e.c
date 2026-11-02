/* Module: pngu3266.dll
   Function: GetFileFilterIndex
   Address: 60602c9e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNOpenFileDialog::GetFileFilterIndex(void) */

ulong __thiscall XPNOpenFileDialog::GetFileFilterIndex(XPNOpenFileDialog *this)

{
                    /* 0x12c9e  1190  ?GetFileFilterIndex@XPNOpenFileDialog@@QAEKXZ */
  return *(ulong *)(this + 0x10c);
}


