/* Module: rmme3260.dll
   Function: FUN_66246820
   Address: 66246820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66246820(void *this,byte param_1)

{
  FUN_66246850(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


