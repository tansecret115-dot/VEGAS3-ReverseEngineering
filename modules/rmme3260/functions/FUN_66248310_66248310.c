/* Module: rmme3260.dll
   Function: FUN_66248310
   Address: 66248310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66248310(void *this,byte param_1)

{
  FUN_66248340(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


