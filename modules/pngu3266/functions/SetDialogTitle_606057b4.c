/* Module: pngu3266.dll
   Function: SetDialogTitle
   Address: 606057b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNBrowseDialog::SetDialogTitle(char const *) */

void __thiscall XPNBrowseDialog::SetDialogTitle(XPNBrowseDialog *this,char *param_1)

{
                    /* 0x157b4  1895  ?SetDialogTitle@XPNBrowseDialog@@QAEXPBD@Z
                       0x157b4  1904  ?SetFileFilter@XPNOpenFileDialog@@QAEXPBD@Z */
  FUN_60618ed0(this + 0xdc,param_1);
  return;
}


