/* Module: rmme3260.dll
   Function: FUN_662657c0
   Address: 662657c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662657c0(void *this,byte param_1)

{
  FUN_662657f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


