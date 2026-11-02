/* Module: rmme3260.dll
   Function: FUN_6620e710
   Address: 6620e710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6620e710(void *this,byte param_1)

{
  FUN_6620e740(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


