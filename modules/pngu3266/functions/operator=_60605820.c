/* Module: pngu3266.dll
   Function: operator=
   Address: 60605820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBrowseDialog & __thiscall CPNBrowseDialog::operator=(class CPNBrowseDialog const
   &) */

CPNBrowseDialog * __thiscall
CPNBrowseDialog::operator=(CPNBrowseDialog *this,CPNBrowseDialog *param_1)

{
                    /* 0x15820  435  ??4CPNBrowseDialog@@QAEAAV0@ABV0@@Z */
  XPNBrowseDialog::operator=((XPNBrowseDialog *)this,(XPNBrowseDialog *)param_1);
  return this;
}


