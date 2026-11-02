/* Module: rmme3260.dll
   Function: FUN_6621ade0
   Address: 6621ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621ade0(void *this,byte param_1)

{
  FUN_6621ae10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


