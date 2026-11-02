/* Module: pngu3266.dll
   Function: SetDialogTitle
   Address: 60602c6d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNOpenFileDialog::SetDialogTitle(char const *) */

void __thiscall XPNOpenFileDialog::SetDialogTitle(XPNOpenFileDialog *this,char *param_1)

{
                    /* 0x12c6d  1896  ?SetDialogTitle@XPNOpenFileDialog@@QAEXPBD@Z */
  FUN_60618ed0(this + 0xf4,param_1);
  return;
}


