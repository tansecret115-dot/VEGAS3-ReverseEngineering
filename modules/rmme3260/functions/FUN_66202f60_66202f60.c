/* Module: rmme3260.dll
   Function: FUN_66202f60
   Address: 66202f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66202f60(void *this,byte param_1)

{
  FUN_66202f90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


