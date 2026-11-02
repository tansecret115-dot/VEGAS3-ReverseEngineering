/* Module: rmbe3260.dll
   Function: FUN_66009a80
   Address: 66009a80
   Source: Ghidra pseudocode (Stage 10 batch) */


XPNWizardPage * __thiscall FUN_66009a80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66064208;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_660641b8;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_660641a0;
  XPNWizardPage::~XPNWizardPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


