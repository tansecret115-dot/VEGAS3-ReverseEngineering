/* Module: pngu3266.dll
   Function: operator=
   Address: 60602cc4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNOpenFileDialog & __thiscall CPNOpenFileDialog::operator=(class CPNOpenFileDialog
   const &) */

CPNOpenFileDialog * __thiscall
CPNOpenFileDialog::operator=(CPNOpenFileDialog *this,CPNOpenFileDialog *param_1)

{
                    /* 0x12cc4  476  ??4CPNOpenFileDialog@@QAEAAV0@ABV0@@Z */
  XPNOpenFileDialog::operator=((XPNOpenFileDialog *)this,(XPNOpenFileDialog *)param_1);
  return this;
}


