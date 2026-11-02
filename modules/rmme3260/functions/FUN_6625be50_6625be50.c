/* Module: rmme3260.dll
   Function: FUN_6625be50
   Address: 6625be50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6625be50(void *this,byte param_1)

{
  FUN_6625be80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


