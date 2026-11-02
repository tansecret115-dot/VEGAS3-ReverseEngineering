/* Module: rmme3260.dll
   Function: FUN_66207290
   Address: 66207290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66207290(void *this,byte param_1)

{
  FUN_662072c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


