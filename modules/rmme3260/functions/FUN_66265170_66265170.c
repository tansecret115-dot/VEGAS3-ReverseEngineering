/* Module: rmme3260.dll
   Function: FUN_66265170
   Address: 66265170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66265170(void *this,byte param_1)

{
  FUN_662651a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


