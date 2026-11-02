/* Module: rmme3260.dll
   Function: FUN_66206020
   Address: 66206020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66206020(void *this,byte param_1)

{
  FUN_66206050(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


