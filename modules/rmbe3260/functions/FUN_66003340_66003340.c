/* Module: rmbe3260.dll
   Function: FUN_66003340
   Address: 66003340
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66003340(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66062c48;
  FUN_66001220(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


