/* Module: pngu3266.dll
   Function: CPNDialog
   Address: 605fbcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDialog::CPNDialog(void) */

CPNDialog * __thiscall CPNDialog::CPNDialog(CPNDialog *this)

{
                    /* 0xbcd0  57  ??0CPNDialog@@QAE@XZ */
  XPNDialog::XPNDialog((XPNDialog *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}


