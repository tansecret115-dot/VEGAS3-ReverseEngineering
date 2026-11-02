/* Module: rmbe3260.dll
   Function: FUN_660571f0
   Address: 660571f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660571f0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66068ae8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


