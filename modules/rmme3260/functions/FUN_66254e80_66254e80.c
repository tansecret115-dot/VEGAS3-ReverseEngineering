/* Module: rmme3260.dll
   Function: FUN_66254e80
   Address: 66254e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66254e80(void *this,byte param_1)

{
  FUN_66254eb0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


