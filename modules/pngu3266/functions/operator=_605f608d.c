/* Module: pngu3266.dll
   Function: operator=
   Address: 605f608d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNDialog & __thiscall CPNDialog::operator=(class CPNDialog const &) */

CPNDialog * __thiscall CPNDialog::operator=(CPNDialog *this,CPNDialog *param_1)

{
                    /* 0x608d  452  ??4CPNDialog@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}


