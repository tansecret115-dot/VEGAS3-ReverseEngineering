/* Module: rmme3260.dll
   Function: FUN_6621b840
   Address: 6621b840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621b840(void *this,byte param_1)

{
  FUN_6621b870(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


