/* Module: rmme3260.dll
   Function: FUN_66266180
   Address: 66266180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66266180(void *this,byte param_1)

{
  FUN_662661b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


