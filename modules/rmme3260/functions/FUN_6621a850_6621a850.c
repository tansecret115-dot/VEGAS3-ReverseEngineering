/* Module: rmme3260.dll
   Function: FUN_6621a850
   Address: 6621a850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621a850(void *this,byte param_1)

{
  FUN_6621a880(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


