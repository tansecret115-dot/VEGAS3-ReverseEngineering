/* Module: rmbe3260.dll
   Function: FUN_66009ae0
   Address: 66009ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


XPNWizardPage * __thiscall FUN_66009ae0(void *this,byte param_1)

{
  FUN_66009b10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


