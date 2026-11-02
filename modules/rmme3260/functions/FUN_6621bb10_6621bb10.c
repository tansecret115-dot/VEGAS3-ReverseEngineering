/* Module: rmme3260.dll
   Function: FUN_6621bb10
   Address: 6621bb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6621bb10(void *this,byte param_1)

{
  FUN_6621bb40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


