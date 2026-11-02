/* Module: pngu3266.dll
   Function: CPNMessageBox
   Address: 605fee40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMessageBox::CPNMessageBox(class CPNMessageBox const &) */

CPNMessageBox * __thiscall CPNMessageBox::CPNMessageBox(CPNMessageBox *this,CPNMessageBox *param_1)

{
  undefined4 uVar1;
  
                    /* 0xee40  98  ??0CPNMessageBox@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xd0) = uVar1;
  return this;
}


