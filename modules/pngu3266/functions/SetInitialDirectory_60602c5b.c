/* Module: pngu3266.dll
   Function: SetInitialDirectory
   Address: 60602c5b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNOpenFileDialog::SetInitialDirectory(char const *) */

void __thiscall XPNOpenFileDialog::SetInitialDirectory(XPNOpenFileDialog *this,char *param_1)

{
                    /* 0x12c5b  1926  ?SetInitialDirectory@XPNOpenFileDialog@@QAEXPBD@Z */
  FUN_60618ed0(this + 0xe8,param_1);
  return;
}


