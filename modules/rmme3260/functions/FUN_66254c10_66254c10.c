/* Module: rmme3260.dll
   Function: FUN_66254c10
   Address: 66254c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66254c10(void *this,byte param_1)

{
  FUN_66254c00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


