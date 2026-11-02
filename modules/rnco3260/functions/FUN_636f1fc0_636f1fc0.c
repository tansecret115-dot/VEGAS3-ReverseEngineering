/* Module: rnco3260.dll
   Function: FUN_636f1fc0
   Address: 636f1fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f1fc0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_63765110;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


