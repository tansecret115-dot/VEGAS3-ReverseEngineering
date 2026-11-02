/* Module: rmme3260.dll
   Function: FUN_66257340
   Address: 66257340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257340(void *this,byte param_1)

{
  FUN_66257690(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


