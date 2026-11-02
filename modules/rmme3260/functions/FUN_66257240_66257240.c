/* Module: rmme3260.dll
   Function: FUN_66257240
   Address: 66257240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257240(void *this,byte param_1)

{
  FUN_66257270(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


