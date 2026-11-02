/* Module: pngu3266.dll
   Function: operator=
   Address: 605fee67
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMessageBox & __thiscall CPNMessageBox::operator=(class CPNMessageBox const &) */

CPNMessageBox * __thiscall CPNMessageBox::operator=(CPNMessageBox *this,CPNMessageBox *param_1)

{
                    /* 0xee67  473  ??4CPNMessageBox@@QAEAAV0@ABV0@@Z
                       0xee67  536  ??4XPNMessageBox@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  return this;
}


