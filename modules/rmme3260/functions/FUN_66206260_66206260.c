/* Module: rmme3260.dll
   Function: FUN_66206260
   Address: 66206260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66206260(void *this,byte param_1)

{
  FUN_66206290(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


