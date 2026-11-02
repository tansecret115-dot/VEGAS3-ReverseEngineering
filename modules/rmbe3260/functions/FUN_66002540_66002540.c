/* Module: rmbe3260.dll
   Function: FUN_66002540
   Address: 66002540
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_66002540(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66062818;
  CPNDialog::~CPNDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


