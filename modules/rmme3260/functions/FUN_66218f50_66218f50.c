/* Module: rmme3260.dll
   Function: FUN_66218f50
   Address: 66218f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66218f50(void *this,byte param_1)

{
  FUN_66218f80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


