/* Module: rmbe3260.dll
   Function: FUN_66002ca0
   Address: 66002ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66002ca0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66062ab8;
  FUN_66001220(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


