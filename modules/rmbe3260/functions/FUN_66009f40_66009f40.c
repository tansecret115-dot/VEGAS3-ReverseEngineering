/* Module: rmbe3260.dll
   Function: FUN_66009f40
   Address: 66009f40
   Source: Ghidra pseudocode (Stage 10 batch) */


XPNWizardPage * __thiscall FUN_66009f40(void *this,byte param_1)

{
  FUN_66009f70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


